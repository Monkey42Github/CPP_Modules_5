#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : Form(src), _target(src._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& rhs)
{
    (void)rhs;
    return *this;
}

void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (this->getSigned() == false)
        throw Form::NotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();

    std::ofstream file(this->getName() + "_shrubbery");
    file << "         v." << std::endl;
    file << "        >X<" << std::endl;
    file << "         A" << std::endl;
    file << "        d$b" << std::endl;
    file << "      .d/$$b." << std::endl;
    file << "    .d$i$$/$$b." << std::endl;
    file << "       d$$@b" << std::endl;
    file << "      d/$$$ib" << std::endl;
    file << "    .d$$$/$$$b" << std::endl;
    file << "  .d$$@$$$$/$$ib." << std::endl;
    file << "      d$$i$$b" << std::endl;
    file << "     d/$$$$@$b" << std::endl;
    file << "  .d$@$$/$$$$$@b." << std::endl;
    file << ".d$$$$i$$$/$$$$$$b." << std::endl;
    file << "        ###" << std::endl;
    file << "        ###" << std::endl;
    file << "        ###" << std::endl;
    file.close();
}
