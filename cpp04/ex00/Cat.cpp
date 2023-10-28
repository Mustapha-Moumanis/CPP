/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:25:43 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/27 21:23:51 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat &other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat Sound!!" << std::endl;
}
