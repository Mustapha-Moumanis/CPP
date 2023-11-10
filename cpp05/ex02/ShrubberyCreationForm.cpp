/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:05:15 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/10 17:55:30 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm", 25, 5)
{
	target = "undefined";
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string t):AForm("ShrubberyCreationForm", 25, 5)
{
	target = t;
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):AForm(other.getName(), other.getGradeSign(), other.getGradeExecute())
{
	target = other.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	target = other.target;
	return *this; 
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!getSign() || (executor.getGrade() > getGradeExecute()))
		throw (GradeTooLowException());
}
