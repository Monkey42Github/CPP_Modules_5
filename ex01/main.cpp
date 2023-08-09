#include"Bureaucrat.hpp"
#include"Form.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("burtest", 1);
        Form form("formtest", 1);

        bureaucrat.signForm(form);

        std::cout << form << std::endl;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}


