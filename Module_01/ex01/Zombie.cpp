#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Constructor has been called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "The zombie " << this->_name << "got destructured" << std::endl;
}

Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::name_setter(std::string name)
{
    this->name = name;
}

Zombie::name_getter()
{
    return (this->_name);
}