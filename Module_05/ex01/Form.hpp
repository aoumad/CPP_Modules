#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Bureaucrat; // C++ forward declaration

/*When you make a forward declaration, 
you are informing the compiler you intend to use something in advance.
The important take aways, as declared in the link above, are that forward declarations
break cyclic references and reduce compiler build times. */

class Form
{
private:
    const   std::string _name;
    bool        _is_signed;
    const   int         _signGrade;
    const   int         _execGrade
    void                catchGrade();

public:
    Form();
    Form(std::string &name, int signGrade, int execGrade);
    Form(const Form& other);
    Form&   operator= (const Form& other);
    ~Form();

    void            beSigned(const Bureaucrat& obj);
    std::string     getName();
    int             getSignedGrade();
    int             getExecuGrade();
    bool            getSigned();

    //********** Exception class declaration ***********
    class GradeTooHighException:: public std::exception
    {
        public:
            virtual const char* what() const throw()
                return ("You overrated the grade, which is limites in the range [1, 150]");
    };
    class GradeTooLowException:: public std::exception
    {
        public:
            virtual const char* what() const throw()
                return ("You underrated the grade, which is limites in the range [1, 150]");
    };
};