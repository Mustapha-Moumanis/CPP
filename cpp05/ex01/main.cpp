/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:28 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/07 16:35:19 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{   
    Form form("form", 2, 2);
    std::cout << form << std::endl;
    
    Bureaucrat Burea("Burea", 2);
    Burea.decrement();
    std::cout << Burea << std::endl;
    Burea.signForm(form);

    return 0;
}