#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _points(100), _energyPoints(50), _attackDamage(20)
{
    std::cout << this->_name << "Claptrap has been created!!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << this->_name << "copy ClapTrap created" << std::endl;
}

ClapTrap    ClapTrap::operator= (const ClapTrap& other)
{
    this->_name = other._name;
    this->_points = other._points;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;

    return (*this)
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "Claptrap " << this->_name << " khwaw lih lrkabi :(" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name <<  " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_attackDamage == 0)
    {
        std::cout << "Claptrap " << this->_name << " is already dead!!" << std::endl;
        return ;
    }
    if (amount > this->_attackDamage)
        amount = this->_attackDamage;
    std::cout << "Claptrap " << this->_name << " has taken " << amount << " as an amount of damage!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_attackDamage == 0)
    {
        std::cout << "ClapTrap " << this->_name << " cannot be repaired since he is already dead :(" << std::endl;
        return ;
    }
    this->_attackDamage+= amount;
    std::cout << "ClapTrap " << this->_name << " has been repaired with an amount of" << amount << std::endl;
}