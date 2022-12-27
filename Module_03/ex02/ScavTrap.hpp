#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & other);
        ~ScavTrap(void);

        ScavTrap & operator=(ScavTrap const & rhs);
        void attack(std::string const & target);

        void guardGate();
};

#endif