#include "Conversion.hpp"



// i will use pointers to functions to see if the number is int,double,float,char, using switch case

void    convert(std::string &literal)
{
    int _iVal = 0;
    float   _fVal = 0.0f;
    double  _dVal = 0.0;
    char    _cVal = 0;
    bool    _char = false;
    int (*p[4])(std::string &literal) = {&isInt, &isDouble, &isFloat, &isChar};
    for (int i = 0; i < 4; i++)
    {
        if (p[i](literal))
        {
            switch (i)
            {
                case 0:
                    _iVal = std::stoi(literal);
                    _fVal = static_cast<float>(_iVal);
                    _dVal = static_cast<double>(_iVal);
                    _cVal = static_cast<char>(_iVal);
                case 1:
                    _dVal = std::stod(literal);
                    _fVal = static_cast<float>(_dVal);
                    _iVal = static_cast<int>(_dVal);
                    _cVal = static_cast<char>(_dVal);
                case 2:
                    _fVal = std::stof(literal);
                    _dVal = static_cast<double>(_fVal);
                    _iVal = static_cast<int>(_fVal);
                    _char = true;
                case 3:
                    _cVal = literal[0];
                    _iVal = static_cast<int>(_cVal);
                    _dVal = static_cast<int>(_cVal);
                    _fVal = static_cast<int>(_cVal);
            }
            break;
        }
    }
    std::cout << "char: ";
    if ((_cVal >= 32 && _cVal <= 47) || (_cVal >= 58 && _cVal <= 126))
        std::cout << "\'" << _cVal << std::cout << "\'" << std::endl;
    else if (_cVal < 32 || _cVal > 126 || (_cVal >= 48 && _cVal <= 57))
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
        std::cout << _fVal << "f" << std::endl;
    else
        std::cout << "impossible" << std::endl;
    
    std::cout << "double: ";
    if (_dVal >= -DBL_MIN && _dVal <= DBL_MAX)
        std::cout << _dVal << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

int     isInt(std::string &literal)
{
    int i = 0;
    if (literal[i] == '-' || literal[i] == '+')
        i++;
    while (literal[i])
    {
        if (!isdigit(literal[i]))
            return (0);
        i++;
    }
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

int     isChar(std::string &literal)
{
    if (literal.length() == 1 && isprint(literal[0]))
        return (1);
    return (0);
}