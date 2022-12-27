#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitpoints = other._hitpoints;
        _energy_points = other._energy_points;
        _attack_damage = other._attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{

    if (_energy_points <= 0 || _hitpoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy to attack!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    _energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((unsigned int)_hitpoints <= amount)
    {
        _hitpoints = 0;
        std::cout << "ClapTrap " << _name << " has no hitpoints left!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    _hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_points <= 0 || _hitpoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy or hitpoints to repair!" << std::endl;
        return ;
    }
    if (_hitpoints + amount > 10)
    {
        std::cout << "ClapTrap " << _name << " has max hitpoints!" << std::endl;
        _hitpoints = 10;
        return ;
    }
    std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points!" << std::endl;
    _hitpoints += amount;
    _energy_points -= 1;
}