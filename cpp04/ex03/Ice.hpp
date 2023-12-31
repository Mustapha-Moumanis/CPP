/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:28:57 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/02 15:46:07 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(Ice &other);
		Ice &operator = (const Ice &other);
		~Ice();
        virtual AMateria* clone() const;
		void use(ICharacter& target);
};

# endif