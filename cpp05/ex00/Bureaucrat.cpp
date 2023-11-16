/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:31:52 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/15 18:09:30 by mmoumani         ###   ########.fr       */
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

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs)
{
    os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return os;
}
