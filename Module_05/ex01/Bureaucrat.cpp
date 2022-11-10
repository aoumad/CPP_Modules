#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name), _grade(grade)
{
    std::cout << "Parametrized Constructor called" << std::endl;

    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name), _grade(other._grade)
{
    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat&  Bureaucrat::operator= (const Bureaucrat& other)
{
    this->_grade = other._grade;
    return (*this);
}

std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void)  const
{
    return (this->_grade);
}

void    Bureaucrat::gradeUp(void)
{
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void    Bureaucrat::gradeDown(void)
{
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

void    Bureaucrat::signForm(const Form& form)
{
   if (form.getSigned())
   {
        std::cout << this->_name << " Bureaucrat signed ";
        std::cout << form.getName() << " Form" << std::endl;
   }
   else
   {
        std::cout << this->_name << " Bureaucrat couldn't sign ";
        std::cout << form.getName() << " Form because grade is too low" << std::endl;
   }
}