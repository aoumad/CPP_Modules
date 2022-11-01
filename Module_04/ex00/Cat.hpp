#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat
{
public:
    Cat();
    Cat(const Cat& other);
    ~Cat();
    
    void    makeSound();
};

#endif
