/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:10:29 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/10 21:35:38 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("Robotomy Request", 72, 45)
{
	target = "undefined";
};

RobotomyRequestForm::RobotomyRequestForm(std::string t):AForm("Robotomy Request", 72, 45)
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
    if (!getSign())
		throw (NoSignException());
	else if (executor.getGrade() > getGradeExecute())
		throw (GradeTooLowException());
	else
    {
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
}
