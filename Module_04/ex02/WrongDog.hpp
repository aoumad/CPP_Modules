#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog
{
public:
    WrongDog();
    WrongDog(const WrongDog& other);
    ~WrongDog();

    void    makeSound();
};

#endif