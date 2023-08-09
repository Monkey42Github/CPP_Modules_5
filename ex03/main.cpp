#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{
    Intern  interntest;
    Form*   form;

    form = interntest.makeForm("robotomy request", "Bender");
    // std::cout << form->getName() << std::endl;
    delete form;

    return EXIT_SUCCESS;
}
