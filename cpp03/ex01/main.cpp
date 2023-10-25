/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:26:13 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/25 14:52:16 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ClapTrap a("Parent");
    
    a.attack("Child");
    a.takeDamage(9);
    a.beRepaired(1);
    a.takeDamage(2);
    a.beRepaired(1);
    std::cout << std::endl;

    ScavTrap b("Child");
    b.attack("Parent");
    b.takeDamage(99);
    b.beRepaired(1);
    b.takeDamage(2);
    b.beRepaired(1);
    b.guardGate();
    std::cout << std::endl;

    return 0;
}