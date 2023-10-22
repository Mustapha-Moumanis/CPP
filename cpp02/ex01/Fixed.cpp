/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:30:09 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/22 11:19:16 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &nother)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = nother.fixedPoint;
}

Fixed::Fixed(const int in)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = in << nBits;

}

Fixed::Fixed(const float fn)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = roundf(fn * (1 << nBits));
}

float Fixed::toFloat( void ) const
{
	return ((float)fixedPoint  / (1 << nBits));
}
int Fixed::toInt( void ) const
{
	return (fixedPoint >> nBits);
}

const Fixed &Fixed::operator=(const Fixed &other)
{
	this->fixedPoint = other.fixedPoint;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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

std::ostream& operator<<(std::ostream& os, const Fixed& rhs)
{
	os << rhs.toFloat();
	return (os);
}