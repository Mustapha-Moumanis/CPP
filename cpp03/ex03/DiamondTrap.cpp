/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:47:54 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/27 17:17:13 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap : Default constructor called" << std::endl;
    Name = "DiamondTrap";
	ClapTrap::Name = Name + "_clap_name";
	hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap : Parameterized constructor called" << std::endl;
    Name = name;
	ClapTrap::Name = Name + "_clap_name";
	hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap &other)
{
	std::cout << "DiamondTrap : Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap : Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	Name = other.Name;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap : Destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap Name : " << Name << std::endl;
	std::cout << "ClapTrap Name : " << ClapTrap::Name << std::endl;
}
