/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:28 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/10 20:56:36 by mmoumani         ###   ########.fr       */
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
        Bureaucrat Burea("Burea", 3);
        PresidentialPardonForm PPF("PPF");
        std::cout << "PresidentialPardonForm Grade Execute " << PPF.getGradeExecute() << std::endl;
        
        std::cout << "PresidentialPardonForm Sign " << PPF.getSign() << std::endl;
        Burea.signForm(PPF);
        std::cout << "PresidentialPardonForm Sign " << PPF.getSign() << std::endl;
        Burea.executeForm(PPF);

        RobotomyRequestForm RRF("RRF");

        ShrubberyCreationForm SCF("SCF");
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
