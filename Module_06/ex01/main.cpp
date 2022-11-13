#include "Data.hpp"

int main(void)
{
    uintptr_t   i = 4;
    Data    obj(i);

    std::cout << obj.serialize(&obj) << std::endl;
    std::cout << obj.deserialize(obj.serialize(&obj)) << std::endl;
    return (0);
}