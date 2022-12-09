#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructor called" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::name_getter()
{
    return (this->_name);
}

void    Zombie::name_setter(std::string name)
{
    this->_name = name;
}