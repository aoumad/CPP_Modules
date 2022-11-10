#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string _target;

public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm& operator= (cosnt RobotomyRequestForm& other);

    std::string getTarget();
    void    execute(const Bureaucrat& executor) const;
};

#endif