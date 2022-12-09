#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    void        announce(void);
    void        name_setter(std::string name);
    std::string name_getter();
};

Zombie* newZombie( std::string name);
void randomChump( std::string name);

#endif