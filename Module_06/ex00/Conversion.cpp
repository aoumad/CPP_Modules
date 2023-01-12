#include "Conversion.hpp"

// Conversion::Conversion()
// {
// }

// Conversion::Conversion(std::string str)
// {
// }

// Conversion::Conversion(const Conversion &copy)
// {
// }

// Conversion &Conversion::operator=(const Conversion &copy)
// {
// }

// Conversion::~Conversion()
// {
// }

void    convert(std::string &literal)
{
    std::stringstream   ss;
    std::string         tmp;
    size_t              pos;

    int     _iVal = 0;
    float   _fVal = 0.0f;
    double  _dVal = 0.0;
    char    _cVal = 0;
    bool    _isChar = false;
    bool    _isInt = false;
    bool    _isFloat = false;
    bool    _isDouble = false;
    bool    _isImpossible = false;
    bool    _isNan = false;
    bool    _isInf = false;

    if (literal.length() == 1 && !isdigit(literal[0]) && literal != "\0")
    {
        _cVal = literal[0];
    }
    else if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
    {
        _cVal = literal[1];
        // _iVal = static_cast<int>(_cVal);
        // _fVal = static_cast<float>(_cVal);
        // _dVal = static_cast<double>(_cVal);
        // _isChar = true;
    }
    if (literal == "\0")
    {
        _isImpossible = true;
        _isChar = false;
    }
    // if (this->_cVal == "\0")
    //     this->_isImpossible = true;
    else
    {
        pos = literal.find('.');
        if (pos != std::string::npos)
        {
            tmp = literal.substr(pos + 1);
            if (tmp.find_first_not_of("0123456789") == std::string::npos)
            {
                _isFloat = true;
                _isDouble = true;
            }
        }
        else
        {
            _isInt = true;
            _isDouble = true;
        }
        if (_isInt || _isFloat || _isDouble)
        {
            ss << literal;
            if (_isInt)
                ss >> _iVal;
            if (_isFloat)
                ss >> _fVal;
            if (_isDouble)
                ss >> _dVal;
            if (ss.fail())
            {
                _isImpossible = true;
                _isInt = false;
                _isFloat = false;
                _isDouble = false;
            }
            else
            {
                if (_isInt)
                {
                    if (_iVal < 0 || _iVal > 127)
                        _isImpossible = true;
                    else
                    {
                        _cVal = static_cast<char>(_iVal);
                        _fVal = static_cast<float>(_iVal);
                        _dVal = static_cast<double>(_iVal);
                    }
                }
                if (_isFloat)
                {
                    if (isnan(_fVal))
                        _isNan = true;
                    else if (isinf(_fVal))
                        _isInf = true;
                    else if (_fVal < 0 || _fVal > 127)
                        _isImpossible = true;
                    else
                    {
                        _cVal = static_cast<char>(_fVal);
                        _iVal = static_cast<int>(_fVal);
                        _dVal = static_cast<double>(_fVal);
                    }
                }
                if (_isDouble)
                {
                    if (isnan(_dVal))
                        _isNan = true;
                    else if (isinf(_dVal))
                        _isInf = true;
                    else if (_dVal < 0 || _dVal > 127)
                        _isImpossible = true;
                    else
                    {
                        _cVal = static_cast<char>(_dVal);
                        _iVal = static_cast<int>(_dVal);
                        _fVal = static_cast<float>(_dVal);
                    }
                }
            }
        }
    }

    if (_isChar)
        std::cout << "char: " << _cVal << std::endl;
    else if (_isImpossible)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    
    if (_isDouble)
        std::cout << "double: " << _dVal << std::endl;
    else if (_isImpossible)
        std::cout << "double: impossible" << std::endl;
    else if (_isNan)
        std::cout << "double: nan" << std::endl;
    else if (_isInf)
        std::cout << "double: inf" << std::endl;
    
    if (_isFloat)
        std::cout << "float: " << _fVal << "f" << std::endl;
    else if (_isImpossible)
        std::cout << "float: impossible" << std::endl;
    else if (_isNan)
        std::cout << "float: nanf" << std::endl;
    else if (_isInf)
        std::cout << "float: inff" << std::endl;
    
    if (_isInt)
        std::cout << "int: " << _iVal << std::endl;
    else if (_isImpossible)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: Non displayable" << std::endl;
}