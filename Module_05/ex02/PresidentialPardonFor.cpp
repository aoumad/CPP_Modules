#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5)
{
    std::cout << "Presidential Pardon Form is created" << std::endl;
    this->_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5)
{
    std::cout << "Presidential Pardon Form is created" << std::endl;
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
    std::cout << "Presidential Pardon Form is copied" << std::endl;
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential Pardon Form is destroyed" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    std::cout << "Presidential Pardon Form is assigned" << std::endl;
    this->_target = rhs._target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw Form::GradeTooLowException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    else
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &pres)
{
    out << "Presidential Pardon Form: " << pres.getName() << ", grade to sign: " << pres.getGradeToSign() << ", grade to execute: " << pres.getGradeToExecute() << ", signed: " << pres.getSigned() << std::endl;
    return out;
}