/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:30:05 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/04 15:13:43 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed 
{
	private :
		int fixedPoint;
		static const int nBits = 8;
	public :
		Fixed();
		Fixed(const Fixed &nother);
		Fixed(const int in);
		Fixed(const float fn);
		~Fixed();

		Fixed &operator=(const Fixed &other);
		
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		
		Fixed operator+(const Fixed &other);
		Fixed operator-(const Fixed &other);
		Fixed operator/(const Fixed &other);
		Fixed operator*(const Fixed &other);


		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed &min(Fixed &o1, Fixed &o2);
		static Fixed &max(Fixed &o1, Fixed &o2);
		static const Fixed &min(const Fixed &o1, const Fixed &o2);
		static const Fixed &max(const Fixed &o1, const Fixed &o2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& rhs);

# endif