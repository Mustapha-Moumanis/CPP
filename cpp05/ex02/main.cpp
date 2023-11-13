/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:28 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/13 20:21:24 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat Burea("Burea", 1);
        PresidentialPardonForm PPF("PPF");
        std::cout << "PresidentialPardonForm Grade Execute " << PPF.getGradeExecute() << std::endl;
        std::cout << "PresidentialPardonForm Sign " << PPF.getSign() << std::endl;
        Burea.signForm(PPF);
        std::cout << "PresidentialPardonForm Sign " << PPF.getSign() << std::endl;
        Burea.executeForm(PPF);

        std::cout << std::endl;

        RobotomyRequestForm RRF("RRF");
        std::cout << "RobotomyRequestForm Grade Execute " << RRF.getGradeExecute() << std::endl;
        std::cout << "RobotomyRequestForm Sign " << RRF.getSign() << std::endl;
        Burea.signForm(RRF);
        std::cout << "RobotomyRequestForm Sign " << RRF.getSign() << std::endl;
        Burea.executeForm(RRF);

        std::cout << std::endl;

        ShrubberyCreationForm SCF("SCF");
        std::cout << "ShrubberyCreationForm Grade Execute " << SCF.getGradeExecute() << std::endl;
        std::cout << "ShrubberyCreationForm Sign " << SCF.getSign() << std::endl;
        Burea.signForm(SCF);
        std::cout << "ShrubberyCreationForm Sign " << SCF.getSign() << std::endl;
        Burea.executeForm(SCF);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
