#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    *c1 = new ScavTrap("Thor");
    ScavTrap    *c2 = new ScavTrap("Thor");

    ClapTrap    *c3 = new ClapTrap("Ragnar");
    ClapTrap    *c4 = new ClapTrap(*c3);

    c1->attack("Wissixes");
    c2->attack("someone");
    c3->attack("Floki");
    c4->attack("other");

    c1->takeDamage(80);
    c2->takeDamage(5000);
    c3->takeDamage(2);
    c3->takeDamage(5);
    c4->takeDamage(60);

    c1->beRepaired(1000);
	c2->beRepaired(14);
	c3->beRepaired(7);

    c1->guardGate();

    delete c1;
    delete c2;
    delete c3;
    delete c4;

    return (0)l
}