/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:30:09 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/22 18:33:44 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &nother)
{
	this->fixedPoint = nother.fixedPoint;
}

Fixed::Fixed(const int in)
{
	fixedPoint = in << nBits;
}

Fixed::Fixed(const float fn)
{
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

int Fixed::getRawBits( void ) const
{
	return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedPoint = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& rhs)
{
	os << rhs.toFloat();
	return (os);
}

// Comparison operators :

bool Fixed::operator>(const Fixed &other) { return (toFloat() > other.toFloat()); }
bool Fixed::operator<(const Fixed &other) { return (toFloat() < other.toFloat()); }
bool Fixed::operator>=(const Fixed &other) { return (toFloat() >= other.toFloat()); }
bool Fixed::operator<=(const Fixed &other) { return (toFloat() <= other.toFloat()); }
bool Fixed::operator==(const Fixed &other) { return (toFloat() == other.toFloat()); }
bool Fixed::operator!=(const Fixed &other) { return (toFloat() != other.toFloat()); }

Fixed &Fixed::operator++() { fixedPoint++; return (*this); }
Fixed &Fixed::operator--() { fixedPoint--; return (*this); }
Fixed Fixed::operator++(int) { Fixed tmp; tmp = (*this); fixedPoint++; return (tmp); }
Fixed Fixed::operator--(int) { Fixed tmp; tmp = (*this); fixedPoint--; return (tmp); }

// Arithmetic operators :
	
Fixed Fixed::operator+(const Fixed &other) { return (toFloat() + other.toFloat()); }
Fixed Fixed::operator-(const Fixed &other) { return (toFloat() - other.toFloat()); }
Fixed Fixed::operator/(const Fixed &other) { return (toFloat() / other.toFloat()); }
Fixed Fixed::operator*(const Fixed &other) { return (toFloat() * other.toFloat()); }

Fixed &Fixed::min(Fixed &o1, Fixed &o2)
{
	if (o1.fixedPoint < o2.fixedPoint)
		return (o1);
	return (o2);
}

Fixed &Fixed::max(Fixed &o1, Fixed &o2)
{
	if (o1.fixedPoint > o2.fixedPoint)
		return (o1);
	return (o2);
}

const Fixed &Fixed::min(const Fixed &o1, const Fixed &o2)
{
	if (o1.fixedPoint < o2.fixedPoint)
		return (o1);
	return (o2);
}

const Fixed &Fixed::max(const Fixed &o1, const Fixed &o2)
{
	if (o1.fixedPoint > o2.fixedPoint)
		return (o1);
	return (o2);
}