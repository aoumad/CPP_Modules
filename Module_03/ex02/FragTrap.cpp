#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const & other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitpoints = rhs._hitpoints;
        this->_energy_points = rhs._energy_points;
        this->_attack_damage = rhs._attack_damage;
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " give you a high five" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
    if (_energy_points <= 0 || _hitpoints <= 0)
    {
        std::cout << "FragTrap " << _name << " has no energy to attack!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    _energy_points -= 1;
}