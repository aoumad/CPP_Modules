#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern : public 
{
    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();

        Intern & operator=(Intern const & rhs);

        Form *makeForm(std::string const & formName, std::string const & target);
};

#endif