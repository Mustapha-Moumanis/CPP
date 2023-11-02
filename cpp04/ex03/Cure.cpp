/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:38:25 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/02 21:36:19 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure::Cure(Cure &other) 
{
	*this = other;
}

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
		type = other.type;
	return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
    return new Cure;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}