/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:28:51 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/02 21:37:09 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice::Ice(Ice &other) 
{
	*this = other;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
		type = other.type;
	return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const
{
    return new Ice;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}