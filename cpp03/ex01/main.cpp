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

    return 0;
}