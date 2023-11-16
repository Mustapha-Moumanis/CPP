/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:28 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/15 19:01:25 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat Burea("Burea", 3);
        
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");

        std::cout << *rrf << std::endl;
        Burea.signForm(*rrf);
        std::cout << *rrf << std::endl;
        Burea.executeForm(*rrf);

        delete rrf;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
