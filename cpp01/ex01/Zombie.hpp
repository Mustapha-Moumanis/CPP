/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:33:59 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/15 01:52:22 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
    private :
        std::string name;

    public :
        Zombie( void );
        ~Zombie( void );
        void announce( void );
        void SetName(std::string n);
};

Zombie* zombieHorde( int N, std::string name );

#endif