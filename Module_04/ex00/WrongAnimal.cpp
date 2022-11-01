#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Wrong Animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    *this = other;
    std::cout << "Wrong Animal copy contructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal destructor called" << std::endl;
}

WrongAnimal::operator= (const WrongAnimal& other)
{
    this->type = other.type;

    std::cout << "Wrong Animal operator contrustor called" << std::endl;
}

void    WrongAnimal::getType() const
{
    return (this->type);
}

std::string WrongAnimal::makeSound()
{
    std::cout << "Wrong Animal make sound called" << std::endl;
}