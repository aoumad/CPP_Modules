#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat b("Bureaucrat", 149);
        try
        {
            b.decrementGrade();
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << b << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Grade out of range " << e.what() << std::endl;
        return (0);
    }

    // try
    // {
    //     b.incrementGrade();
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << b << std::endl;
    
    return (0);
}