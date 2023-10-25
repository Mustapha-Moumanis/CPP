/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:37:27 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/25 21:41:28 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
        ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &other);
		ScavTrap &operator = ( const ScavTrap &other );
		~ScavTrap();

		void attack(const std::string &target);
		void guardGate();
};

# endif