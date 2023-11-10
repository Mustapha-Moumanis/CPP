/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:31:52 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/10 18:22:52 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("leader"), grade(1) {}

Bureaucrat::Bureaucrat(const std::string n, int g) : name(n)
{
	if (g < 1)
		throw GradeTooHighException();
	else if (g > 150)
		throw GradeTooLowException();
	else
		grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
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

void Bureaucrat::signForm(AForm &AForm)
{
	try
	{
		AForm.beSigned(*this);
		if (AForm.getSign())
			std::cout << name << " signed " << AForm.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << name << " couldn't sign " << AForm.getName() << " because " << e.what() << ".\n";
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return os;
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}