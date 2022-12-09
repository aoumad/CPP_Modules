#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie zombiee = Zombie();
    zombiee.name_setter(name);
    zombiee.announce(); 
}