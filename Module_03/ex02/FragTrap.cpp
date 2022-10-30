#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    this->_points = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;

    std::cout << this->_name << " FragTrap created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
    *this = other;
    std::cout << this->_name << " copy FragTrap created!" << std::endl;
}

FragTrap    FragTrap::operator= (const FragTrap& other)
{
    this->_name = other._name;
    this->_points = other._points;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;

    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called!" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    if (this->_energyPoints == 0) {
		std::cout << this->_name << " FragTrap can't hight fives since it's dead :(" << std::endl;
	    return;
	}

	std::cout << this->_name << " FragTrap gives you a hight fives1" << std::endl;
}