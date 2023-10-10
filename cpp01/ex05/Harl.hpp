/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:55:36 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/09 21:18:14 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    
    public :
        int  check_level( std::string level );
        void complain( std::string level );
};

# endif