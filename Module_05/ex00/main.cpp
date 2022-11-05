#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat  obj("Bjorn Ironside", 1);

        std::cout << obj << std::endl;

        obj.gradeDown();
        obj.gradeUp();
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);   
}