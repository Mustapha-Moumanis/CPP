/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:28:02 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/15 12:08:40 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern 
{
	AForm *newPresidForm(std::string t);
	AForm *newRobotForm(std::string t);
	AForm *newShrubForm(std::string t);
	public :
		Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		~Intern();
		class FormNotFound: public std::exception
		{
			public :
				const char* what() const throw();
		};
        AForm *makeForm(std::string t, std::string n);
};

struct allForms
{
    std::string type;
    AForm *(Intern::*pmf)(std::string);
};

#endif