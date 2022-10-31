#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal& other);
    Animal& operator= (const Animal& other);
    virtual ~Animal(void);

    virtual void    makeSound() const;
    std::string getType() const;
};

#endif