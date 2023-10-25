/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:28:32 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/25 13:21:51 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	Name = "ClapTrap";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Parameterized constructor called" << std::endl;
	Name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	Name = other.Name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (hitPoints == 0 || energyPoints == 0)
		std::cout << "ClapTrap " << Name << " can't do anything!!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0 || energyPoints == 0)
		std::cout << Name << " can't do anything!!" << std::endl;
	else
	{
		std::cout << Name << " take " << amount << " of damage!" << std::endl;
		if (amount > hitPoints)
			hitPoints = 0;
		else
			hitPoints -= amount;
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0 || energyPoints == 0)
		std::cout << Name << " can't do anything!!" << std::endl;
	else
	{
		std::cout << Name <<  " repairs itself, it gets " << amount << " hit points back." << std::endl;
		hitPoints += amount;
		energyPoints--;
	}
}
