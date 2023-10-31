/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:38:25 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/31 19:41:45 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure Default constructor called" << std::endl;
    type = "cure";
}

Cure::Cure(Cure &other) 
{
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = other;
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Cure Copy assignment operator called" << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
    return new Cure;
}
