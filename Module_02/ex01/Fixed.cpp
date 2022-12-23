#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixed_point = (num << this->_nFractBits);
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixed_point = std::roundf(num * (1 << this->_nFractBits));
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed&  Fixed::operator = (const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_fixed_point = other.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_point);
}

void    Fixed::setRawBits( int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_point = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)this->_fixed_point / (1 << this->_nFractBits));
}

int Fixed::toInt(void) const
{
    return (this->_fixed_point >> this->_nFractBits);
}