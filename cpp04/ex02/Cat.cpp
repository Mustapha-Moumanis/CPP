/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:25:43 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/31 15:51:15 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
	type = "Cat";
	ptr = new Brain();
}

Cat::Cat(Cat &other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	ptr = new Brain(*other.ptr);
	type = other.type;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		delete ptr;
		ptr = new Brain(*other.ptr);
		type = other.type;
	}
	return *this;
}

Cat::~Cat()
{
	delete ptr;
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat Sound!!" << std::endl;
}
