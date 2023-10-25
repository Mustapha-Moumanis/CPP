/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:47:51 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/25 22:12:15 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private :
		std::string Name;

	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap &other);
		DiamondTrap &operator = ( const DiamondTrap &other );
		~DiamondTrap();

		void attack(const std::string &target);
        void whoAmI();
};

# endif