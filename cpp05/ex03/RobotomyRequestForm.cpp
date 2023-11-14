/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:10:29 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/14 20:57:17 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("robotomy request", 72, 45)
{
	target = "undefined";
};

RobotomyRequestForm::RobotomyRequestForm(std::string t):AForm("robotomy request", 72, 45)
{
	target = t;
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
	else
    {
        time_t timer = time(NULL);
        if (timer == -1)
            throw (std::runtime_error("the system has no time"));
        if (timer % 2)
            std::cout << target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "The " << target << " has unfortunately failed" << std::endl;
    }
}
