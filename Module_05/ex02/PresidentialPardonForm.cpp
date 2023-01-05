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
    
}