#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    *this = other;
    std::cout << "Copy Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator= (const Animal& copy)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}