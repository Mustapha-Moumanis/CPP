/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:31:52 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/15 18:09:10 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(1) {}

Bureaucrat::Bureaucrat(const std::string n, int g) : name(n)
{
    if (g < 1)
        throw GradeTooHighException();
    else if (g > 150)
        throw GradeTooLowException();
    else
        grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    this->grade = other.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::decrement()
{
    if ((grade + 1) > 150)
        throw GradeTooLowException();
    else
        grade++;
}

void Bureaucrat::increment()
{
    if ((grade - 1) < 1)
        throw GradeTooHighException();
    else
        grade--;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "This grade is so High.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "This grade is so Low.";
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        if (form.getSign())
            std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << ".\n";
    }
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs)
{
    os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return os;
}