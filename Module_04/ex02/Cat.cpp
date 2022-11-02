#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
    *this = other;
    std::cout << "Cat copy constructor called" << std::endl;
}

void    Cat::makeSound()
{
    std::cout << "Cat make sound called" << std::endl;
}