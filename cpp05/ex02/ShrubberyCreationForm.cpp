/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:05:15 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/13 20:22:22 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Shrubbery Creation", 145, 137)
{
	target = "undefined";
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string t):AForm("Shrubbery Creation", 145, 137)
{
	target = t;
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

void ShrubberyCreationForm::DesignTree() const
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
		throw(std::ios_base::failure("You have a problem if the File : " + target + "_shrubbery "));
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!getSign() || (executor.getGrade() > getGradeExecute()))
		throw (GradeTooLowException());
	else
		DesignTree();
}