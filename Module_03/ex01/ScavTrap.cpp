#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    this->_points = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;

    std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    *this = other;

    std::cout << this->_name << " Copy ScavTrap created!" << std::endl; 
}

ScavTrap    ScavTrap::operator= (const ScavTrap& other)
{
    this->_name = other._name;
    this->_points = other._points;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;

    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " khwaw lih lrkabi :(" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name <<  " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}

void    ScavTrap::guardGate()
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " cannot guarde the gate since he is already dead!!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " is guarding the gate now!!" << std::endl;
}