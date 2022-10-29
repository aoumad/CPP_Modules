#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap
{
private:
    std::string  _name;
    int         _points;
    int         _energyPoints;
    int         _attackDamage;
public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);
    ClapTrap&   operator= (const ClapTrap& other);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif