#include"Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("test", 1);
        std::cout << bureaucrat << std::endl;

        // bureaucrat.decrementer();
        bureaucrat.incrementer();
        std::cout << bureaucrat << std::endl;

    } catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}
