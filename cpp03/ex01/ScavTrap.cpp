/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:37:19 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/25 21:14:35 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap : Default constructor called" << std::endl;
    Name = "*ScavTrap*";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap : Parameterized constructor called" << std::endl;
    Name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &other)
{
	std::cout << "ScavTrap : Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap : Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	Name = other.Name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (hitPoints == 0 || energyPoints == 0)
		std::cout << "ScavTrap " << Name << " can't do anything!!" << std::endl;
	else
	{
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
