#include "Zombie.hpp"

Zombie::Zombie()
{
    // std::cout << "Constructor has been called" << std::endl;
}

Zombie::~Zombie()
{
    // std::cout << "The zombie " << this->_name << "got destructured" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::name_setter(std::string name)
{
    this->_name = name;
}

std::string Zombie::name_getter()
{
    return (this->_name);
}