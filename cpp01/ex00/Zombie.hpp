/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:22:43 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/04 15:13:29 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
    private :
        std::string name;

    public :
        Zombie( std::string n );
        ~Zombie( void );
        void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif