/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:51:18 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/03 16:26:19 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
{
	this->name = "";
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
		this->save[i] = 0;
	}
}

Character::Character(std::string const & name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
		this->save[i] = 0;
	}
}

Character::Character(Character &other) 
{
	name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
		{
			this->inventory[i] = other.inventory[i]->clone();
			this->save[i] = inventory[i];
		}
	}
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; i++)
			if (this->save[i])
				delete this->save[i];
		for (int i = 0; i < 4; i++)
		{
			if (other.inventory[i])
			{
				this->inventory[i] = other.inventory[i]->clone();
				this->save[i] = inventory[i];
			}
			else
			{
				this->inventory[i] = 0;
				this->save[i] = 0;
			}
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->save[i])
			delete this->save[i];
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
			this->save[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3 && this->inventory[idx])
		this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && this->inventory[idx])
		this->inventory[idx]->use(target);
}
