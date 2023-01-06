#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 145, 137)
{
    std::cout << "Shrubbery Creation Form is created" << std::endl;
    this->_target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137)
{
    std::cout << "Shrubbery Creation Form is created" << std::endl;
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
    std::cout << "Shrubbery Creation Form is copied" << std::endl;
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery Creation Form is destroyed" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    std::cout << "Shrubbery Creation Form is assigned" << std::endl;
    this->_target = rhs._target;
    return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw Form::GradeTooLowException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    std::ofstream file(_target + "_shrubbery");
    file << "         v" << std::endl;
    file << "        >X<" << std::endl;
    file << "         A" << std::endl;
    file << "        d$b" << std::endl;
    file << "      .d\\$$b." << std::endl;
    file << "    .d$i$$\\$$b." << std::endl;
    file << "  .d$$@ii@$$\\$$b." << std::endl;
    file << "  d$$@@$$@@$$@$$b" << std::endl;
    file << " d$$@$$@@$$@@$$@$$b" << std::endl;
    file << "d$$@@$$@@$$@@$$@@$$b" << std::endl;
    file << ":$$$$$$$$$$$$$$$$$$$$;" << std::endl;
    file << ":$$$$$$$$$$$$$$$$$$$$;" << std::endl;
    file << " \\$$$$$$$$$$$$$$$$$$$/" << std::endl;
    file << "  \\$$$$$$$$$$$$$$$$$/" << std::endl;
    file << "   `\\$$$$$$$$$$$$$$/" << std::endl;
    file << "     `\\$$$$$$$$$$/" << std::endl;
    file << "       `\\$$$$$$/" << std::endl;
    file << "         `\\$$/" << std::endl;
    file << "           `/" << std::endl;
    file << "           `|" << std::endl;
    file << "           `|" << std::endl;
    file << "           `|" << std::endl;
    file << "           ,|" << std::endl;
    file << "          /#\\" << std::endl;
    file << "         /###\\" << std::endl;
    file << "        /#####\\" << std::endl;
    file << "       /#######\\" << std::endl;
    file << "      /#########\\" << std::endl;
    file.close();
}

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &shr)
{
    out << "Shrubbery Creation Form: " << shr.getName() << ", grade to sign: " << shr.getGradeToSign() << ", grade to execute: " << shr.getGradeToExecute() << ", signed: " << shr.getSigned() << std::endl;
    return out;
}