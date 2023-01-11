#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(void)
{
    Bureaucrat  *bureaucrat = new Bureaucrat("Bureaucrat", 1);
    Form        *form = new PresidentialPardonForm("Form");
    Form        *form2 = new RobotomyRequestForm("Form2");
    Form        *form3 = new ShrubberyCreationForm("Form3");

    std::cout << *bureaucrat << std::endl;
    std::cout << *form << std::endl;
    std::cout << *form2 << std::endl;
    std::cout << *form3 << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    bureaucrat->signForm(*form);
    bureaucrat->signForm(*form2);
    bureaucrat->signForm(*form3);

    std::cout << "----------------------------------------" << std::endl;
    std::cout << *bureaucrat << std::endl;
    std::cout << *form << std::endl;
    std::cout << *form2 << std::endl;
    std::cout << *form3 << std::endl;

    std::cout << "----------------------------------------" << std::endl;

    bureaucrat->executeForm(*form);
    bureaucrat->executeForm(*form2);
    bureaucrat->executeForm(*form3);

    delete bureaucrat;
    return (0);
}