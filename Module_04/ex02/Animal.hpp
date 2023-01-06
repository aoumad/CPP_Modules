// ABSTRACT CLASS

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
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const = 0; // now by law we have an abstract clas eheheh
};

#endif