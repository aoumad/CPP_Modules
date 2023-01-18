#include "Conversion.hpp"



// i will use pointers to functions to see if the number is int,double,float,char, usin if else

void    convert(std::string &literal)
{
    int _iVal = 0;
    float   _fVal = 0.0f;
    double  _dVal = 0.0;
    char    _cVal = 0;
    bool    _char = false;
    bool    _float = false;
    bool    _double = false;

    int (*p[5])(std::string &literal) = {&check, &isInt, &isDouble, &isFloat, &isChar};
    for (int i = 0; i < 5; i++)
    {
        if (p[i](literal))
        {
            if (i == 1)
            {
                std::cout << literal << std::endl;
                _iVal = std::stod(literal);
                std::cout << "literal is int " << _iVal << std::endl;
                _fVal = static_cast<float>(_iVal);
                _dVal = static_cast<double>(_iVal);
                _cVal = static_cast<char>(_iVal);
                std::cout << "char: " << _cVal << std::endl;
            }
            else if (i == 2)
            {
                _dVal = std::stod(literal);
                // std::cout << "literal is double " << _dVal << std::endl;
                _fVal = static_cast<float>(_dVal);
                _iVal = static_cast<int>(_dVal);
                _cVal = static_cast<char>(_dVal);
                _double = true;
            }
            else if (i == 3)
            {
                _fVal = std::stof(literal);
                // std::cout << "literal is float " << _fVal << std::endl;
                _dVal = static_cast<double>(_fVal);
                _iVal = static_cast<int>(_fVal);
                _char = true;
                _float = true;
            }
            else if (i == 4)
            {
                _cVal = literal[0];
                // std::cout << "literal is char " << _cVal << std::endl;
                _iVal = static_cast<int>(_cVal);
                _dVal = static_cast<int>(_cVal);
                _fVal = static_cast<int>(_cVal);
            }
            break;
        }
    }
    std::cout << "char: ";
    if ((_cVal >= 32 && _cVal <= 47) || (_cVal >= 58 && _cVal <= 126))
        std::cout << "'" <<  _cVal << "'" << std::endl;
    else if ((_cVal < 32 || _cVal > 126 || (_cVal >= 48 && _cVal <= 57)) && _char == false)
        std::cout << "Non displayable" << std::endl;
    else if (_char == true)
        std::cout << "\'" << "*" << "\'" << std::endl;
    else
        std::cout << "impossible" << std::endl;

    std::cout << "int: ";
    if (_iVal >= INT_MIN && _iVal <= INT_MAX)
        std::cout << _iVal << std::endl;
    else
        std::cout << "impossible" << std::endl;

    std::cout << "float: ";
    if (_fVal >= -FLT_MIN && _fVal <= FLT_MAX)
    {
        if (_float == true || _double == true)
            std::cout <<  _fVal << "f" << std::endl;
        else if (_float == false)
            std::cout << _fVal << ".0f" << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
    
    std::cout << "double: ";
    if (_dVal >= -DBL_MIN && _dVal <= DBL_MAX)
    {
        if (_double == true || _float == true)
            std::cout << _dVal << std::endl;
        else if (_double == false && _float == false)
            std::cout << _dVal << ".0" << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

// it should handle as well expononet
int     isInt(std::string &literal)
{
    int i = 0;
    int dot = 0;
    if (literal[i] == '-' || literal[i] == '+')
        i++;
    while (literal[i])
    {
        if ((literal[i] == 'e' || literal[i] == 'E') && !isdigit(literal[i]))
        {
            dot++;
            i++;
            if (literal[i] == '+')
                i++;
        }
        else if (!isdigit(literal[i]) || literal[i] == '-')
        {
            return (0);
        }
        else
            i++;
    }
    if (dot > 1)
        return (0);
    return (1);
}

int     isDouble(std::string &literal)
{
    int i = 0;
    int dot = 0;
    if (literal[i] == '-' || literal[i] == '+')
        i++;
    while (literal[i])
    {
        if (literal[i] == '.')
            dot++;
        else if (!isdigit(literal[i]))
            return (0);
        i++;
    }
    if (dot > 1)
        return (0);
    return (1);
}

int     isFloat(std::string &literal)
{
    int i = 0;
    int dot = 0;
    int dot2 = 0;
    if (literal[i] == '-' || literal[i] == '+')
        i++;
    while (literal[i])
    {
        if (literal[i] == 'e' || literal[i] == 'E')
        {
            dot2++;
            i++;
            if (literal[i] == '-')
                i++;
        }
        if (literal[i] == '.')
            dot++;
        else if (!isdigit(literal[i]))
            return (0);
        i++;
    }
    if (dot > 1 || dot2 > 1)
        return (0);
    return (1);
}

int     isChar(std::string &literal)
{
    if (literal.length() == 1 && isprint(literal[0]))
        return (1);
    return (0);
}

// check function will check either the input literal is nan, nanf ...etc
int     check(std::string &literal)
{
    if (literal == "nan" || literal == "nanf" || literal == "nanl")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << "nanf" << std::endl;
        std::cout << "double: " << "nan" << std::endl;
        exit(0);
    }
    return (0);
}