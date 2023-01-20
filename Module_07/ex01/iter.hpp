#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

/*
The first parameter is the address of an array.
• The second one is the length of the array.
• The third one is a function that will be call on every element of the array*/
template <typename T>
void iter(T *array, int length, void (*f)(T const &))
{
    for (int i = 0; i < length; i++)
        f(array[i]);
}

template <typename T>
void print(T const &x)
{
    std::cout << x << std::endl;
}

#endif