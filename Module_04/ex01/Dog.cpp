#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->_dogBrian = new Brain();
}

Dog::Dog(const Dog& other)
{
    *this = other;
    std::cout << "Cat copy consturctor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_dogBrian;
    std::cout << "Dog\'s brain removed" << std::endl;
}

void    Dog::makeSound()
{
    std::cout << "Dog make sound called" << std::endl;
}

Dog&    operator= (const Dog& other)
{
    std::cout << "Dog assignement operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        this->_dogBrain = new brain( *other._dogBrain);
    }
    return (*this);
}