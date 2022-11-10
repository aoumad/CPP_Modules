#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target), Form("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): Form(other), _target(other._target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm RobotomyRequestForm::operator= (const RobotomyRequestForm& other)
{
    if (this != &other)
        this->Form::operator=(other);
    return (*this);
}

std::string RobotomyRequestForm::getTarget()
{
    return (this->_target);
}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() > this->getExecuGrade())
        throw Form::GradeTooLowException();
    if (!getSigned())
        throw Form::FormNotSignedException();
    {
        int rand = rand();
        if (rand % 2 == 0)
            std::cout << this->_target << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->_target << " has failed to robotomized" << std::endl;
    }
}