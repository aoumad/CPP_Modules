#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template< typename T >
class Array
{
    private:
        T* array;
        unsigned int n;
    public:
        Array() : n(0)
        {
            array = new T[0];
        }
        Array(unsigned int n) : n(n)
        {
            array = new T[n];
        }
        Array(Array const & src) : n(src.n)
        {
            array = new T[n];
            for (unsigned int i = 0; i < n; i++)
                array[i] = src.array[i];
        }
        ~Array()
        {
            delete[] array;
        }
        Array & operator=(Array const & rhs)
        {
            if (this != &rhs)
            {
                delete[] array;
                n = rhs.n;
                array = new T[n];
                for (unsigned int i = 0; i < n; i++)
                    array[i] = rhs.array[i];
            }
        }
        T & operator[](unsigned int i) const
        {
            if (i >= n)
                throw std::exception();
            return array[i];
        }
        unsigned int size() const
        {
            return n;
        }
};

#endif