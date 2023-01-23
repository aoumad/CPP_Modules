#include "Array.hpp"

int main(void)
{
    Array<int> a(10);
    
    try
    {
        a[6] = 8;
        std::cout << a[6] << std::endl;
        std::cout << a[50] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "index is out of range" << std::endl;
    }
    return (0);
}