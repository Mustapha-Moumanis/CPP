/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:26:13 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/25 14:56:24 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
    ClapTrap a("Parent");
    
    a.attack("Child");
    a.takeDamage(9);
    a.beRepaired(1);
    a.takeDamage(2);
    a.beRepaired(1);
    std::cout << std::endl;
    
    ScavTrap b("Child 1");
    b.attack("Parent");
    b.takeDamage(99);
    b.beRepaired(1);
    b.takeDamage(2);
    b.beRepaired(1);
    b.guardGate();
    std::cout << std::endl;
    
    FragTrap c("Child 2");
    c.attack("Parent");
    c.takeDamage(99);
    c.beRepaired(1);
    c.takeDamage(2);
    c.beRepaired(1);
    c.highFivesGuys();

    std::cout << std::endl;

    return 0;
}