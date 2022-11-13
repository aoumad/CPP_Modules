#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <ostream>
#include <stdint.h>
#include <string>
#inc

class Data
{
private:
    int _cursusLevel;
public:
    Data(int cursusLevel);
    ~Data();
    Data(const Data& other);
    Data& operator= (const Data& other);
    
    Data* deserialize(uintptr_t raw);
    uintptr_t serialize(Data* ptr);
    /* an unsigned integer type with the property
    that any valid pointer to void can be converted to this type,
    then converted back to pointer to void,
    and the result will compare equal to the original pointe
    
    (uintptr_t might be the same size as a void*) 
    */
};

#endif