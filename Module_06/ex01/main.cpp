#include "Data.hpp"

int main(void)
{
    Data *data = new Data;
    data->s1 = "Hello";
    data->n = 42;
    data->s2 = "World";

    uintptr_t raw = serialize(data);
    Data *deserialized = deserialize(raw);

    std::cout << "s1: " << deserialized->s1 << std::endl;
    std::cout << "n: " << deserialized->n << std::endl;
    std::cout << "s2: " << deserialized->s2 << std::endl;

    delete data;
    return 0;
}