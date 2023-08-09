#include "Form.hpp"

Form::Form(const std::string& name, int grade_signed) : _name(name), _grade_signed(grade_signed), _grade_execute(0)
{
    if (grade_signed < 1)
        throw Form::GradeTooHighException();
    if (grade_signed > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& src) : _name(src.getName()), _grade_signed(src.get_grade_signed()), _grade_execute(src.get_grade_execute()) {}

Form::~Form() {}

Form&   Form::operator=(const Form& rhs)
{
    if (this != &rhs)
        _signed = rhs.get_grade_signed();
    return *this;
}

std::string Form::getName() const
{
    return _name;
}

bool        Form::get_signed() const
{
    return _signed;
}

int         Form::get_grade_signed() const
{
    return _grade_signed;
}

int         Form::get_grade_execute() const
{
    return _grade_execute;
}

void        Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _grade_signed)
        throw Form::GradeTooLowException();
    _signed = true;
}

std::ostream& operator<<(std::ostream& o, const Form& rhs)
{
    o << "Form name: " << rhs.getName() << std::endl
      << "Grade sign: " << rhs.get_grade_signed() << std::endl
      << "Grade execute: " << rhs.get_grade_execute() << std::endl;
    return o;
}
