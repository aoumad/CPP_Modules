#include "Zombie.hpp"

int main(void)
{
    int size = 14;
    Zombie  *hord = zombieHorde(size, "awesome_horde");
    for (int i = 0; i < size; i++)
        hord[i].announce();
    delete[] hord;
    return (0);
}