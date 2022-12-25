#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const & other);
        ~FragTrap(void);

        FragTrap & operator=(FragTrap const & rhs);
        void highFivesGuys(void);
};

#endif