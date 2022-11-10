#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
    std::string _target;

public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm&  other);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm&  operator= (const ShrubberyCreationForm& other);
    
    std::string getTarget();
    void        execute( const Bureaucrat& executor ) const;
}

#endif