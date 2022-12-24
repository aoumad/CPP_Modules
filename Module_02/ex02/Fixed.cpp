#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fixedPointValue(n << _fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fixedPointValue(roundf(n * (1 << _fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed&  Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        _fixedPointValue = rhs.getRawBits();
        return *this;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
}

void    Fixed::setRawBits(int const raw)
{
    _fixedPointValue = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)_fixedPointValue / (1 << _fractionalBits));
}

int     Fixed::toInt(void) const
{
    return (_fixedPointValue >> _fractionalBits);
}

std::ostream&   operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}

bool    Fixed::operator>(const Fixed &rhs) const
{
    return (_fixedPointValue > rhs.getRawBits());
}

bool    Fixed::operator<(const Fixed &rhs) const
{
    return (_fixedPointValue < rhs.getRawBits());
}

bool    Fixed::operator>=(const Fixed &rhs) const
{
    return (_fixedPointValue >= rhs.getRawBits());
}

bool    Fixed::operator<=(const Fixed &rhs) const
{
    return (_fixedPointValue <= rhs.getRawBits());
}

bool    Fixed::operator==(const Fixed &rhs) const
{
    return (_fixedPointValue == rhs.getRawBits());
}

bool    Fixed::operator!=(const Fixed &rhs) const
{
    return (_fixedPointValue != rhs.getRawBits());
}

Fixed   Fixed::operator+(const Fixed &rhs) const
{
    return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed   Fixed::operator-(const Fixed &rhs) const
{
    return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed   Fixed::operator*(const Fixed &rhs) const
{
    return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed   Fixed::operator/(const Fixed &rhs) const
{
    return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed&  Fixed::operator++(void)
{
    _fixedPointValue++;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed&  Fixed::operator--(void)
{
    _fixedPointValue--;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed&  Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed&  Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}