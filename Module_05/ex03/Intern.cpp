#include "Intern.hpp"

Intern::Intern()
{
    return ;
}

Intern::Intern(Intern const & src)
{
    *this = src;
    return ;
}

Intern::~Intern()
{
    return ;
}

Intern & Intern::operator=(Intern const & rhs)
{
    if (this != &rhs)
    {
        // do stuff
    }
    return *this;
}

// we shouldn't use if/else statements, instead we will use pointer to member function using typdef

Form *Intern::makeForm(std::string const & formName, std::string const & target)
{
    typedef Form *(Intern::*funcPtr)(std::string const & target);
    funcPtr funcArray[3] = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
    std::string formNameArray[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if (formName == formNameArray[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*funcArray[i])(target);
        }
    }
    std::cout << "Intern can't create " << formName << std::endl;
    return NULL;
}

// we can use a map instead of an array but we are not allowed to use it

// Form *Intern::makeForm(std::string const & formName, std::string const & target)
// {
//     typedef Form *(Intern::*funcPtr)(std::string const & target);
//     std::map<std::string, funcPtr> funcMap;
//     funcMap["shrubbery creation"] = &Intern::makeShrubberyCreationForm;
//     funcMap["robotomy request"] = &Intern::makeRobotomyRequestForm;
//     funcMap["presidential pardon"] = &Intern::makePresidentialPardonForm;
//     if (funcMap.find(formName) != funcMap.end())
//     {
//         std::cout << "Intern creates " << formName << std::endl;
//         return (this->*funcMap[formName])(target);
//     }
//     std::cout << "Intern can't create " << formName << std::endl;
//     return NULL;
// }