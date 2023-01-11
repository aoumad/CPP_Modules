#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat b1("B1", 1);
    Bureaucrat b2("B2", 150);
    Form f1("F1", 1, 1);
    Form f2("F2", 150, 150);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;

    b1.signForm(f1);
    // f1.beSigned(b1);
    b2.signForm(f2);
    // f2.beSigned(b2);

    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
    return (0);
}