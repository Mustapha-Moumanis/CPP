/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:28 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/15 19:01:33 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat Burea("Burea", 3);
        
        PresidentialPardonForm PPF("PPF");
        std::cout << PPF << std::endl;
        Burea.signForm(PPF);
        std::cout << PPF << std::endl;
        Burea.executeForm(PPF);

        std::cout << std::endl;

        RobotomyRequestForm RRF("RRF");
        std::cout << RRF << std::endl;
        Burea.signForm(RRF);
        std::cout << RRF << std::endl;
        Burea.executeForm(RRF);

        std::cout << std::endl;

        ShrubberyCreationForm SCF("SCF");
        std::cout << SCF << std::endl;
        Burea.signForm(SCF);
        std::cout << SCF << std::endl;
        Burea.executeForm(SCF);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
