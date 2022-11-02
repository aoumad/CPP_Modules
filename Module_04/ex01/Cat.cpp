#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->_catBrain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete this->_catBrain;
    std::cout << "Cat\'s brain removed" << std::endl;
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

Cat&    Cat::operator= (const Cat&  other)
{
    std::cout << "Cat assignement operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        this->_catBrain = new Brain( *other._catBrain);
    }
    return (*this);
}