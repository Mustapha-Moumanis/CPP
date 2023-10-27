/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:32:37 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/25 14:46:22 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap : Default constructor called" << std::endl;
    Name = "*FragTrap*";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap : Parameterized constructor called" << std::endl;
    Name = name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &other)
{
	std::cout << "FragTrap : Copy constructor called" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap : Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	Name = other.Name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High fives!!" << std::endl;
}

