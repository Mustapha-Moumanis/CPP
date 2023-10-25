/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:32:25 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/25 21:41:19 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class  FragTrap : virtual public ClapTrap
{    public :
        FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &other);
		FragTrap &operator = ( const FragTrap &other );
		~FragTrap();

        void highFivesGuys(void);
};

# endif