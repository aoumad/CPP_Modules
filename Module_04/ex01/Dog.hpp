#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain*  _dogBrian;
public:
    Dog();
    Dog(const Dog& other);
    Dog&    operator= (const Dog& other);
    ~Dog();

    void    makeSound();
};

#endif