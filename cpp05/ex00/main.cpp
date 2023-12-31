/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:28 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/14 20:40:05 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{   
    try {
        Bureaucrat Burea("Burea", 1);
        std::cout << Burea << std::endl;
        Burea.increment();
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << std::endl;

    try {
        Bureaucrat Burea1("Burea1", 150);
        std::cout << Burea1 << std::endl;
        
        Bureaucrat Burea2("Burea2", 2);
        std::cout << Burea2 << std::endl;
        Burea2 = Burea1;
        std::cout << Burea2 << std::endl;
        Burea1.decrement();
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
   

    return 0;
}
