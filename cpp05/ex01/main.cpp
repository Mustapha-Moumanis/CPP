/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:28 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/14 20:45:45 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{   
    Form form("MyForm", 2, 2);
    std::cout << form << std::endl;
    
    Bureaucrat Burea("Burea", 2);
    Burea.decrement();
    std::cout << Burea << std::endl;
    Burea.signForm(form);
    std::cout << form << std::endl;

    return 0;
}
