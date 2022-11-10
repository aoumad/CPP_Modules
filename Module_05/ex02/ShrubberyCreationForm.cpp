#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): form("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): form(other), _target(other.target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{

}

ShrubberyCreationForm&    ShrubberyCreationForm::operator= (const ShrubberyCreationForm& other)
{
    if (this != &other)
        this->Form::operator=(other);
    return (*this);
}

std::string ShrubberyCreationForm::getTarget()
{
    return (this->_target);
}

void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade < getExecuGrade())
        throw(GradeTooLowException());
    if (!getSigned())
        throw(GradeTooLowException());
    std::ofstrea out(this->getName() + "_shrubbery");
    out << "                      ___" << std::endl;
    out << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    out << "             ,-'          __,,-- \\" << std::endl;
    out << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
    out << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    out << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
    out << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    out << "     (     ,-'                  `." << std::endl;
    out << "      `._,'     _   _             ;" << std::endl;
    out << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    out << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    out << "        `--\'   \"Hb  HH  dF\"" << std::endl;
    out << "                \"Hb HH dF" << std::endl;
    out << "                 \"HbHHdF" << std::endl;
    out << "                  |HHHF" << std::endl;
    out << "                  |HHH|" << std::endl;
    out << "                  |HHH|" << std::endl;
    out << "                  |HHH|" << std::endl;
    out << "                  |HHH|" << std::endl;
    out << "                  dHHHb" << std::endl;
    out << "                .dFd|bHb.               o" << std::endl;
    out << "      o       .dHFdH|HbTHb.          o /" << std::endl;
    out << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    out << "##########################################" << std::endl;

    out.close();
}