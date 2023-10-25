/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:28:30 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/25 13:10:15 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected :
		std::string Name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;

	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &other);
		ClapTrap &operator = ( const ClapTrap &other );
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

# endif