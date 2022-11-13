#include "Data.hpp"

Data::Data(int cursusLevel): _cursusLevel(cursusLevel)
{
}

Data::~Data()
{

}

Data::Data(const Data& other)
{
    *this = other;
}

Data&    Data::operator= (const Data& other)
{
    if (this != &other)
        *this = other;
    return (*this);
}

Data* deserialize(uintptr_t raw)
{
    /*  It is used to convert a pointer of some data type into a pointer of another data type,
            even if the data types before and after conversion are different.
        It does not check if the pointer type and data pointed by the pointer is same or not.
    */
    Data*   ptr = reinterpret_cast<Data *>(raw);
    return (ptr);
}

uintptr_t serialize(Data* ptr)
{
    uintptr_t n = reinterpret_cast<uintptr_t>(ptr);
    return (n);
}