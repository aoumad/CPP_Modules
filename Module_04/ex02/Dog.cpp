#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
    *this = other;
    std::cout << "Cat copy consturctor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Cat destructor called" << std::endl;
}

void    Dog::makeSound()
{
    std::cout << "Dog make sound called" << std::endl;
}