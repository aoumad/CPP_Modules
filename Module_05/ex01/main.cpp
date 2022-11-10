#include "Form.hpp"

int main(void)
{
    int grade = 140;
    try
    {
        Bureaucrat obj("Floki", grade);
        Form form("Thor", 90, 35);
        std::cout << obj.getGrade() << std::endl;
        obj.gradeUp();
        std::cout << obj << std::endl;
        obj.signForm(form);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}