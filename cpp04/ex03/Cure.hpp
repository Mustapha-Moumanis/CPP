/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:37:43 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/31 19:40:45 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(Cure &other);
		Cure &operator = (const Cure &other);
		~Cure();
        virtual AMateria* clone() const;
};

# endif