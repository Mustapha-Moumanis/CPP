/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:26:13 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/26 15:27:41 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap diamond("Diaaaaaamond");

    std::cout << std::endl;
    diamond.attack("Enemie");

    diamond.takeDamage(1337);
    diamond.beRepaired(1337);
    diamond.highFivesGuys();
    diamond.whoAmI();
    std::cout << std::endl;

    return 0;
}