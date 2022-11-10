#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm
{
private:
    std::string _target;
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm& operator= (const PresidentialPardonForm& other);

    std::string getTarget();
    void    execute(const Bureaucrat& other) const;
};

#endif