#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    *c1 = new ClapTrap("Ragnar");
    ClapTrap    *c2 = new ClapTrap("Odin");

    c1->attack("Floki");
    c2->attack("Thor");

    c1->takeDamage(20);
    c1->takeDamage(66);
    c2->takeDamage(2);
    c2->takeDamage(3);

    c1->beRepaired(500);
    c2->beRepaired(1);
    c2->beRepaired(7);

    delete c1;
    delete c2;
    return (0);
}