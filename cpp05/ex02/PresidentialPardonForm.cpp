/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:10:50 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/10 17:54:29 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>

void PresidentialPardonForm::DesignTree()
{
	std::ofstream ofs(target + "_shrubbery");
	if (ofs.is_open())
	{
		ofs << "               *             ,\n"
		<< "                             _/^\\_\n"
		<< "                            <     >\n"
		<< "           *                 /.-.\\         *\n"
		<< "                    *        `/&\\`                   *\n"
		<< "                            ,@.*;@,\n"
		<< "                           /_o.I %_\\    *\n"
		<< "              *           (`'--:o(_@;\n"
		<< "                         /`;--.,__ `')             *\n"
		<< "                        ;@`o % O,*`'`&\n"
		<< "                  *    (`'--)_@ ;o %'()\\      *\n"
		<< "                       /`;--._`''--._O'@;\n"
		<< "                      /&*,()~o`;-.,_ `""`)\n"
		<< "           *          /`,@ ;+& () o*`;-';\n"
		<< "                     (`""--.,_0 +% @' &()\\\n"
		<< "                     /-.,_    ``''--....-'`)  *\n"
		<< "                *    /@%;o`:;'--,.__   __.'\\\n"
		<< "                    ;*,&(); @ % &^;~`\"`o;@();         *\n"
		<< "                    /(); o^~; & ().o@*&`;&%O\\\n"
		<< "                    `\"=\"==\"\"==,,,.,=\"==\"===\"`\n"
		<< "                              #####\n"
		<< "                              #####\n"
		<< "                              #####"
		<< std::endl;
		ofs.close(); 
	}
	else
		throw("You have a problem if the File : ");
}


PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 145, 137)
{
	target = "undefined";
	try
	{
		DesignTree();
	}
	catch(const char *e)
	{
		std::cerr << e <<  target << "_shrubbery"<< std::endl;
	}
};

PresidentialPardonForm::PresidentialPardonForm(std::string t):AForm("PresidentialPardonForm", 145, 137)
{
	target = t;
	try
	{
		DesignTree();
	}
	catch(const char *e)
	{
		std::cerr << e <<  target << "_shrubbery"<< std::endl;
	}
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
}