#ifndef ITER_HPP
#define ITER_HPP

template< typename T>
void    iter(T& arr, size_t size, void(*arr_elm)(T &))
{
    for (size_t i = 0; i < size, i++)
        arr_lem(arr[i]);
}

template< typename T>
void    arr_lem(T &i)
{
    std::cout << i << std::endl;
}

#endif