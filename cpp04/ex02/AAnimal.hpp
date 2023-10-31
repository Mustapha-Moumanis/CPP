/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:25:41 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/31 18:23:26 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal 
{
    protected :
        std::string type;
    public :    
        AAnimal();
		AAnimal(AAnimal &other);
		AAnimal &operator = (const AAnimal &other);
		virtual ~AAnimal();

        std::string  getType() const;
        virtual void makeSound() const = 0;
};

# endif