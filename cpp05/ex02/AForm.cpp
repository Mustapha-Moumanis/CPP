/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:29:28 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/14 20:54:57 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

AForm::AForm() : name("AForm"), sign(0), gradeSign(1), gradeExecute(1) {}

AForm::AForm(std::string n, int gradeS, int gradeE) : name(n), gradeSign(gradeS), gradeExecute(gradeE)
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

AForm::AForm(const AForm &other):name(other.name), gradeSign(other.gradeSign), gradeExecute(1)
{
    *this = other;
}

AForm &AForm::operator=(const AForm &other)
{
    sign = other.getSign();
    return *this;
}

AForm::~AForm() {}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "the grade is so High";
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return "the grade is so Low";
}

std::string AForm::getName() const
{
    return name;
}

bool AForm::getSign() const
{
    return sign;
}

int AForm::getGradeSign() const
{
    return gradeSign;
}

int AForm::getGradeExecute() const
{
    return gradeExecute;
}

void AForm::beSigned(Bureaucrat &Bureu)
{
    if (Bureu.getGrade() <= getGradeSign())
        this->sign = 1;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const AForm& rhs)
{
    os << rhs.getName() << ", AForm grade sign " << rhs.getGradeSign() << ", grade execute " << rhs.getGradeExecute() << ", sign " << rhs.getSign();
    return os;
}
