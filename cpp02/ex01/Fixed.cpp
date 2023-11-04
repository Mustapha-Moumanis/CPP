/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:30:09 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/04 15:13:43 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

// Orthodox Canonical Form

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &nother)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = nother;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPoint = other.fixedPoint;
	return *this;
}

Fixed::Fixed(const int in)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = in * (1 << nBits);
}

Fixed::Fixed(const float fn)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = roundf(fn * (1 << nBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Member functions

float Fixed::toFloat( void ) const
{
	return ((float)fixedPoint / (1 << nBits));
}

int Fixed::toInt( void ) const
{
	return (fixedPoint / (1 << nBits));
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

// Overload of the insertion (<<) operator

std::ostream& operator<<(std::ostream& os, const Fixed& rhs)
{
	os << rhs.toFloat();
	return (os);
}
