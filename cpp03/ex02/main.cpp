/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:26:13 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/04 15:13:43 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main( void )
{
    ScavTrap B("*B*");

    std::cout << std::endl;
    B.attack("*A*");
    B.takeDamage(99);
    B.beRepaired(1);
    B.takeDamage(2);
    B.beRepaired(1337);
    B.guardGate();
    std::cout << std::endl;

    FragTrap C("*C*");

    std::cout << std::endl;
    C.attack("*A*");
    C.takeDamage(99);
    C.beRepaired(1);
    C.takeDamage(2);
    C.beRepaired(1337);
    C.highFivesGuys();
    std::cout << std::endl;

    return 0;
}