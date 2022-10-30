#ifndef SCANTRAP_HPP
#define SCANTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string name);
    ~ScavTrap();

    void    attack(const std::string& target);
    void    guardGate();
};

#endif