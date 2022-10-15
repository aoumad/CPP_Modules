#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie *zombie = new Zombie;
    zombie->name_setter(name);
    return (zombie);
}