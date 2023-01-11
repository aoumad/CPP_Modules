#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        bool _signed;
        int const _gradeToSign;
        int const _gradeToExecute;
        
        public:
            Form();
            Form(std::string name, int gradeToSign, int gradeToExecute);
            Form(const Form &copy);
            Form &operator=(const Form &copy);
            virtual ~Form();
            // this will allow the right derived class's destructor to be called when you delete the pointer to the base class, 
            // this way you can release the memory allocated to an object created by new.

            std::string getName() const;
            bool        getSigned() const;
            int         getGradeToSign() const;
            int         getGradeToExecute() const;
            void        setSigned(bool sign);

            // we should make it as an abstract class
            virtual void        execute(Bureaucrat const & executor) const = 0;

            class GradeTooHighException : public std::exception
            {
                public:
                    virtual const char *what() const throw();
            };

            class GradeTooLowException : public std::exception
            {
                public:
                    virtual const char *what() const throw();
            };
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif