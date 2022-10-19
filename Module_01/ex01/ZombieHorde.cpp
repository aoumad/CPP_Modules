#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* DyArr = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        DyArr[i].name_setter(name);
    }
    return (DyArr);
}