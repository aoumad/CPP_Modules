#include "Zombie.hpp"

int main(void)
{
    size_t size;
    std::cout << "Please enter the size of your horde zombies: " << std::endl;
    std::cout << "> ";
    std::cin >> size;
    Zombie  *hord = zombieHorde(size, "awesome_horde");
    for (size_t i = 0; i < size; i++)
        hord[i].announce();
    delete[] hord;
    return (0);
}