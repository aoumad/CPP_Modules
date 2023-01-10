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

Form *makeShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

Form *makeRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

Form *makePresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string const & formName, std::string target)
{
    typedef Form *(*funcPtr)(std::string target);
    std::string formNameArray[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    funcPtr funcArray[3] = {&makeShrubberyCreationForm, &makeRobotomyRequestForm, &makePresidentialPardonForm};
    for (int i = 0; i < 3; i++)
    {
        if (formName == formNameArray[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (funcArray[i])(target);
        }
    }
    std::cout << "Intern can't create " << formName << std::endl;
    return NULL;
}

// we can use a map instead of an array but we are not allowed to use it... here is the implementation

// Form *Intern::makeForm(std::string const & formName, std::string target)
// {

//     std::map<std::string, Form *(*)(std::string target)> formMap;
//     formMap["shrubbery creation"] = &makeShrubberyCreationForm;
//     formMap["robotomy request"] = &makeRobotomyRequestForm;
//     formMap["presidential pardon"] = &makePresidentialPardonForm;
//     if (formMap.find(formName) != formMap.end())
//     {
//         std::cout << "Intern creates " << formName << std::endl;
//         return (formMap[formName])(target);
//     }
//     std::cout << "Intern can't create " << formName << std::endl;
//     return NULL;
// }