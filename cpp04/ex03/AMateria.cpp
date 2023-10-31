/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:55:11 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/31 20:21:02 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria Parameterized constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria &other) 
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

// void AMateria::use(ICharacter& target)
// {
	
// }
