/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:29:28 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/07 16:40:22 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form() : name("leader"), sign(0), gradeSign(1), gradeExecute(1) {}

Form::Form(std::string n, int gradeS, int gradeE) : name(n), gradeSign(gradeS), gradeExecute(gradeE)
{
    if (gradeSign < 1)
        throw GradeTooHighException();
    else if (gradeSign > 150)
        throw GradeTooLowException();
    if (gradeExecute < 1)
        throw GradeTooHighException();
    else if (gradeExecute > 150)
        throw GradeTooLowException();
    sign = 0;
}

Form::Form(const Form &other):name(other.name), gradeSign(other.gradeSign), gradeExecute(1)
{
    *this = other;
}

Form &Form::operator=(const Form &other)
{
    sign = other.getSign();
    return *this;
}

Form::~Form() {}

const char* Form::GradeTooHighException::what() const throw()
{
    return "the grade is so High";
}
const char* Form::GradeTooLowException::what() const throw()
{
    return "the grade is so Low";
}

std::string Form::getName() const
{
    return name;
}

bool Form::getSign() const
{
    return sign;
}

int Form::getGradeSign() const
{
    return gradeSign;
}

int Form::getGradeExecute() const
{
    return gradeExecute;
}

void Form::beSigned(Bureaucrat &Bureu)
{
    if (Bureu.getGrade() <= getGradeSign())
        this->sign = 1;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& rhs)
{
    os << rhs.getName() << ", form grade sign " << rhs.getGradeSign() << ", grade execute " << rhs.getGradeExecute() << ", sign " << rhs.getSign();
    return os;
}
