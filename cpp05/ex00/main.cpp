/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:28 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/10 17:04:46 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include "Animal.hpp"
#include "Bureaucrat.hpp"
int main()
{   
    try {
        Bureaucrat Burea;
        std::cout << Burea << std::endl;
        Burea.increment();
        try {
            Bureaucrat Burea("Burea", 150);
            std::cout << Burea << std::endl;
            
            Bureaucrat Burea2("Burea2", 2);
            std::cout << Burea2 << std::endl;
            Burea2 = Burea;
            std::cout << Burea2 << std::endl;
            Burea.decrement();
        }
        catch (std::exception& e) {
            std::cout << e.what() << "==============="<< std::endl;
        }
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << std::endl;

   
    return 0;
}
