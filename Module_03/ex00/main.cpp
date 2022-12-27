#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap1;
    ClapTrap claptrap2("Ragnar Lothbrok");
    ClapTrap claptrap3(claptrap2);
    ClapTrap claptrap4("Floki");

    claptrap1.attack("Ragnar Lothbrok");
    claptrap2.takeDamage(100000000);
    claptrap2.beRepaired(10);

    claptrap2.attack("Floki");
    claptrap4.takeDamage(5);
    claptrap4.beRepaired(1000);
    claptrap4.takeDamage(1000);
    claptrap4.beRepaired(1000);
    return 0;
}