/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:10:29 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/10 17:55:11 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", 72, 45)
{
	target = "undefined";
    try {
        time_t timer = time(NULL);
        if (timer == -1)
            throw("the system has no time");
        if (timer % 2)
            std::cout << target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "The robotomization process on the " << target << " has unfortunately failed." << std::endl;
    }
    catch(char const *e) {
        std::cout << e << std::endl;
    }
};

RobotomyRequestForm::RobotomyRequestForm(std::string t):AForm("RobotomyRequestForm", 72, 45)
{
	target = t;
	try {
        time_t timer = time(NULL);
        if (timer == -1)
            throw("the system has no time");
        if (timer % 2)
            std::cout << target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "The robotomization process on the " << target << " has unfortunately failed." << std::endl;
    }
    catch(char const *e) {
        std::cout << e << std::endl;
    }
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):AForm(other.getName(), other.getGradeSign(), other.getGradeExecute())
{
	target = other.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	target = other.target;
	return *this; 
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!getSign() || (executor.getGrade() > getGradeExecute()))
		throw (GradeTooLowException());
}
