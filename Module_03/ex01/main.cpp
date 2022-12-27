#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Odin");
    ScavTrap scav2("Floki");
    ScavTrap scaav = scav;
    scav.attack("Floki");
    scav2.takeDamage(500);
    scav2.beRepaired(10);
    scav2.guardGate();
    return 0;
}