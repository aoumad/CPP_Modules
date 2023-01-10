#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <string>

class Form;

class Bureaucrat
{
    private:
        std::string const   _name;
        int                 _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat();
        Bureaucrat&    operator=(const Bureaucrat &rhs);

        std::string   getName() const;
        int           getGrade() const;

        void          incrementGrade();
        void          decrementGrade();

        void    signForm(Form &form);
        void    executeForm(Form const & form);


        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif