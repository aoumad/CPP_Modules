#include "Conversion.hpp"

Conversion::Conversion()
{
    this->_iVal = 0;
    this->_fVal = 0.0f;
    this->_dVal = 0.0;
    this->_cVal = "\0";
    std::cout << "Conversion default constructor" << std::endl;
}

Conversion::Conversion(const Conversion& other)
{
    *this = other;
}

Conversion&  Conversion::operator= (const Conversion& other)
{
    (void)other;
    return (*this);
}

void    Conversion::convert(const std::string& literal)
{
    std::string specialTypes[6] =
    {
		"-inff", "+inff", "nanf",
		"-inf", "+inf", "nan"
	};

    if (literal.size() == 1 && std::isdigit(literal[0]) && std::isprint(literal[0]))
    {
        this->_cVal = literal[0];
        this->_iVal = static_cast<int>(this->_cVal);
        this->_fVal = static_cast<float>(this->_cVal);
        this->_dVal = static_cast<double>(this->_dVal);
        std::cout << "char: " << this->_cVal << std::endl;
        std::cout << "int: " << this->_iVal  << std::endl;
        std::cout << "flaot: " << this->_fVal << std::endl;
        std::cout << "double: " << this->_dVal << std::endl;
        return ;
    }

    if (std::isprint(std::atoi(literal.c_str())) && this->_cVal == "\0")
    {
        this->_cVal = "'" + static_cast<char>(std::atoi(literal.c_str())) + "'";
    }
    else if (this->_cVal == "\0")
        this->_cVal = "Non Displayable";

    for (int i = 0; i < 6; i++)
    {
        if (literal == specialTypes[i])
        {
            this->_cVal = "impossible";
            break;
        }
    }

    std::cout << "char: " << this->_cVal << std::endl;
    if (this->_cVal == "impossible")
        std::cout << "int: " << this->_cVal << std::endl;
    else
    {
        this->_iVal = std::atoi(literal.c_str());
        std::cout << "int: " << this->_iVal << std::endl; 
    }

    if (literal[literal.size() - 1] == 'f')
    {
        this->_fVal = std::atof(literal.c_str());
        this->_dVal = static_cast<double>(this->_fVal);
    }
    else
    {
        this->_dVal = std::stod(literal.c_str());
        this->_fVal = static_cast<float>(this->_dVal);
    }

    if (literal == "nan")
    {
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else
    {
        std::cout << "float: " << this->_fVal << std::endl;
        std::cout << "double: " << this->_dVal << std::endl;
    }
    return ;
}