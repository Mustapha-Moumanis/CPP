/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:10:50 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/14 20:56:53 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("presidential pardon", 25, 5)
{
	target = "undefined";
};

PresidentialPardonForm::PresidentialPardonForm(std::string t):AForm("presidential pardon", 25, 5)
{
	target = t;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):AForm(other.getName(), other.getGradeSign(), other.getGradeExecute())
{
	target = other.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	target = other.target;
	return *this; 
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!getSign() || (executor.getGrade() > getGradeExecute()))
		throw (GradeTooLowException());
	else
    	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}