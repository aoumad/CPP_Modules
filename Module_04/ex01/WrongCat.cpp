#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Wrong Cat constructor called" << std::endl;
    this->type = "Wrong cat";
}

WrongCat::WrongCat(cosnt WrongDog& other)
{
    *this = other;
    std::cout << "Wrong Cat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat destructor called" << std::endl;
}

WrongCat::makeSound()
{
    std::cout << "Wrong Cat make sound called" << std::endl;
}