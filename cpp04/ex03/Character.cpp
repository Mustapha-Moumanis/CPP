/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:51:18 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/01 18:14:25 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
{
	std::cout << "Character Default constructor called" << std::endl;
	this->name = "";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(std::string const & name)
{
	std::cout << "Character Parameterized constructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(Character &other) 
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = other;
}

Character &Character::operator=(const Character &other)
{
	std::cout << "Character Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; i++)
			this->inventory[i] = other.inventory[i];
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    (void)m;
    std::cout << "equip\n";
}

void Character::unequip(int idx)
{
    (void)idx;
    std::cout << "unequip\n";
    
}

void Character::use(int idx, ICharacter& target)
{
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}
