#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


// int main(void)
// {
//     Bureaucrat  *bureaucrat = new Bureaucrat("Bureaucrat", 1);
//     Form        *form = new PresidentialPardonForm("Form");
//     Form        *form2 = new RobotomyRequestForm("Form2");
//     Form        *form3 = new ShrubberyCreationForm("Form3");

//     std::cout << *bureaucrat << std::endl;
//     std::cout << *form << std::endl;
//     std::cout << *form2 << std::endl;
//     std::cout << *form3 << std::endl;

//     bureaucrat->signForm(*form);
//     bureaucrat->signForm(*form2);
//     bureaucrat->signForm(*form3);

//     bureaucrat->executeForm(*form);
//     bureaucrat->executeForm(*form2);
//     bureaucrat->executeForm(*form3);

//     delete bureaucrat;
//     return (0);
// }

int main(void)
{
    Intern      intern;

    Form        *form = intern.makeForm("shrubbery creation", "Form");
    Form        *form2 = intern.makeForm("robotomy request", "Form2");
    Form        *form3 = intern.makeForm("presidential pardon", "Form3");

    std::cout << *form << std::endl;
    std::cout << *form2 << std::endl;
    std::cout << *form3 << std::endl;

    delete form;
    delete form2;
    delete form3;
    return (0);
}