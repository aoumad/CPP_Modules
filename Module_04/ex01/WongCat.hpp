#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WongCat : public WrongAnimal
{
public:
    WongCat();
    WrongCat(const WrongCat& other);
    ~WongCat();

    void    makeSound();
};

#endif