#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(target), Form("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): Form(other), _target(other._target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm  PresidentialPardonForm::operator= (const PresidentialPardonForm& other)
{
    if (this != &other)
        this->Form::operator=(other);
    return (*this);
}

std::string PresidentialPardonForm::getTarget()
{
    return (this->_target);
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() > this->getExecuGrade())
        throw Form::GradeTooLowException();
    if (!getSigned())
        throw Form::FormNotSignedException();

    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}