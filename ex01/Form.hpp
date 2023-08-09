#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool              _signed;
        const int         _grade_signed;
        const int         _grade_execute;

    public:
        Form();
        Form(const std::string& name, int _grade_signed);
        Form(const std::string& name, int _grade_signed, int _grade_execute);
        Form(const Form& src);
        ~Form();
        Form& operator=(const Form& rhs);

        std::string getName() const;
        bool    get_signed() const;
        int     get_grade_signed() const;
        int     get_grade_execute() const;

        void    beSigned(const Bureaucrat& bureaucrat);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade too high";
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade too low";
                }
        };
};
std::ostream& operator<<(std::ostream& o, const Form& rsh);

#endif

