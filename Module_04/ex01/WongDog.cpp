#include "WrongDog.hpp"

WrongDog::WrongDog()
{
    std::cout << "Wrong Dog constructor called" << std::endl;
    this->type = "Wrong Dog";
}

WrongDog::WrongDog(cosnt WrongDog& other)
{
    *this = other;
    std::cout << "Wrong Dog copy constructor called" << std::endl;
}

WrongDog::~WrongDog()
{
    std::cout << "Wrong Dog destructor called" << std::endl;
}

WrongDog::makeSound()
{
    std::cout << "Wrong Dog make sound called" << std::endl;
}