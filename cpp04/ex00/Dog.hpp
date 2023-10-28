/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:25:41 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/27 20:03:21 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public :    
        Dog();
		Dog(Dog &other);
		Dog &operator = (const Dog &other);
		~Dog();

        void makeSound() const;
};


# endif