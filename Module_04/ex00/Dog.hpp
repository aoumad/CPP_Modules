#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog
{
public:
    Dog();
    Dog(const Dog& other);
    ~Dog();

    void    makeSound();
};

#endif