#include "Weapon.hpp"

Weapon::Weapon(std::string s)
{
    this->setType(s);
}

Weapon::~Weapon()
{
    std::cout << "Destructor has been called" << std::endl;
}

Weapon::getType()
{
    return (this->type);
}

Weapon::setType(std::string s)
{
    this->type = s;
}