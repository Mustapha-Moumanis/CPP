/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:28 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/14 21:01:21 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat Burea("Burea", 45);
        
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    
        std::cout << "Grade Execute " << rrf->getGradeExecute() << std::endl;
        std::cout << "Sign " << rrf->getSign() << std::endl;
        Burea.signForm(*rrf);
        std::cout << "Sign " << rrf->getSign() << std::endl;
        Burea.executeForm(*rrf);
        delete rrf;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
