#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main(void)
{
    Animal *generic;
    Cat cat;
    Dog dog;

    generic = &cat;
    std::cout << generic->getType() << std::endl;
    generic->makeSound();
    generic = &dog;
    std::cout << generic->getType() << std::endl;
    generic->makeSound();

    return 0;
}