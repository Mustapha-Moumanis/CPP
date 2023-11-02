/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:51:18 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/02 22:14:02 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
{
	this->name = "";
	ptr = 0;
	allready_deleted = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(std::string const & name)
{
	this->name = name;
	ptr = 0;
	allready_deleted = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(Character &other) 
{
	*this = other;
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		name = other.name;
		ptr = other.ptr;
		allready_deleted = other.allready_deleted;
		for (int i = 0; i < 4; i++)
			this->inventory[i] = other.inventory[i];
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
            delete this->inventory[i];
	}
	
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == m)
			return ;
		if (this->inventory[i] == 0)
		{
			this->inventory[i] = m;
			return ;
		}
	}
	if (allready_deleted && (allready_deleted != m))
		delete m;
	allready_deleted = m;
}

void Character::unequip(int idx)
{
    if (this->inventory[idx])
	{
		if (ptr)
			delete ptr;
		ptr = this->inventory[idx];
		this->inventory[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && this->inventory[idx])
		this->inventory[idx]->use(target);
}
