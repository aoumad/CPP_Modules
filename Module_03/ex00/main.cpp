#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap1;
    ClapTrap claptrap2("Ragnar Lothbrok");
    ClapTrap claptrap3(claptrap2);
    ClapTrap claptrap4 = claptrap3;

    claptrap1.attack("Ragnar Lothbrok");
    claptrap2.takeDamage(10);
    claptrap3.beRepaired(10);
    claptrap4.attack("Ragnar Lothbrok");
    claptrap4.takeDamage(10);
    claptrap4.beRepaired(10);
    return 0;
}