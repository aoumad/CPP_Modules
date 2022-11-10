#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{
private:
    const std::string   _name;
    int                 _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string const &name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator= (const Bureaucrat& other);
    ~Bureaucrat();

    std::string getName(void) const;
    int         getGrade(void) const;

    void                 gradeUp(void);
    void                 gradeDown(void);
    void                 signForm(const Form& form);

    class GradeTooHighException:: public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("You overrated the grade, which is limites in the range [1, 150]");
            }
    };
    class GradeTooLowException:: public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("You underrated the grade, which is limites in the range [1, 150]")
            }
    };
};

#endif