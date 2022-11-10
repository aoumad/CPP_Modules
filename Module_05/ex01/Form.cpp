#include "Form.hpp"

Form::Form()
{
    std::cout << "Default constructor called" << std::endl;
}

void    Form::catchGrade()
{
    if(_signGrade < 1 || _execGrade < 1)
        throw Form::GradeTooHighException();
    else if (_signGrade > 150 || _execGrade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(std::string cosnt &name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << name << " Form constructor called  with a required grade to sign " << signGrade;
	std::cout << " and a required grade to execute " << executeGrade << std::endl;
}

Form::Form(const Form& other) : _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade), _is_signed(other._is_signed)
{
    std::cout << "Copy constructor called" << std::endl;
}

Form&   Form::operator= (const Form& other)
{
    if (this != &other)
    {
        this->_is_signed = other.getSigned();
        return (*this);
    }
}

void    Form::beSigned(const Bureaucrat& other)
{
    try
    {
        if (other.getGrade() <= this->_signGrade)
            this->_is_signed = true;
        else
            throw Form::GradeTooLowException();
    }
    catch (Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }       
}

std::string Form::getName()
{
    return (this->_name);
}

int Form::getSignedGrade()
{
    return (this->_signGrade);
}

int Form::getExecuGrade()
{
    return (this->_execGrade);
}

bool    Form::getSigned()
{
    return (this->_is_signed);
}