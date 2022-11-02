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

Animal& Animal::operator= (const Animal& other)
{
    this->type = other.type;

    std::cout << "Animal assignement operator called" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "Animal make sound called!" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}