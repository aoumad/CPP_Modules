# include "Form.hpp"

Form::Form() : _name("Default"), _gradeToSign(5), _gradeToExecute(6)
{
    _signed = false;
    std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    _signed = false;
    std::cout << "Constructor called" << std::endl;
}

Form::Form(const Form &copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
    std::cout << "Copy constructor called" << std::endl;
}

Form&   Form::operator=(const Form &copy)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->_signed = copy.getSigned();
        // didn't assign other attributes because 
        // they are constant and can't be changed
    }
    return (*this);
}

Form::~Form()
{
    std::cout << "Destructor called" << std::endl;
}

std::string Form::getName() const
{
    return (this->_name);
}

int         Form::getGradeToSign() const
{
    return (this->_gradeToSign);
}

bool        Form::getSigned() const
{
    return (this->_signed);
}

int         Form::getGradeToExecute() const
{
    return (this->_gradeToExecute);
}

void        Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->_gradeToSign)
        this->_signed = true;
    else
        throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("You overrated the grade, which is limited in the range [1, 150]");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("You underrated the grade, which is limited in the range [1, 150]");
}

std::ostream& operator<<(std::ostream &out, const Form &form)
{
    out << "Form name: " << form.getName() << std::endl;
    out << "Grade to sign: " << form.getGradeToSign() << std::endl;
    out << "Grade to execute: " << form.getGradeToExecute() << std::endl;
    out << "Signed: " << form.getSigned() << std::endl;
    return (out);
}