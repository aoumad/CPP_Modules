#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    ScavTrap    *c1 = new ScavTrap("Thor");
    ScavTrap    *c2 = new ScavTrap("Odin");

    ClapTrap    *c3 = new ClapTrap("Ragnar");
    ClapTrap    *c4 = new ClapTrap(*c3);

    FragTrap    *c5  = new FragTrap("Frkous");
    FragTrap    *c6  = new FragTrap("Thomas");

    c1->attack("Wissixes");
    c2->attack("someone");
    c3->attack("Floki");
    c4->attack("other");
    c5->attack("l7aj");
    c6->attack("unkown");

    c1->takeDamage(80);
    c2->takeDamage(5000);
    c3->takeDamage(2);
    c3->takeDamage(5);
    c4->takeDamage(60);
    c5->takeDamage(46);
    c5->takeDamage(999);
    c6->takeDamage(3);

    c1->beRepaired(1000);
	c2->beRepaired(14);
	c3->beRepaired(7);
    c5->beRepaired(31);
    c6->beRepaired(2);

    c1->guardGate();

    c5->highFivesGuys();
    c6->highFivesGuys();

    delete c1;
    delete c2;
    delete c3;
    delete c4;
    delete c5;
    delete c6;

    return (0)l
}