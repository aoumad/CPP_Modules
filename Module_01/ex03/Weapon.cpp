#include "Weapon.hpp"

Weapon::Weapon(std::string s)
{
    std::cout << "Constructor called" << std::endl;
    setType(s);
}

Weapon::~Weapon()
{
    std::cout << "Destructor has been called" << std::endl;
}

const std::string&  Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string s)
{
    this->type = s;
}