/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:30:05 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/20 13:32:30 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed 
{
    private :
        int fixedPoint;
        static const int nBits = 8;
    public :
        Fixed();
        Fixed(const Fixed &nother);
        const Fixed &operator=(const Fixed &other);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

# endif