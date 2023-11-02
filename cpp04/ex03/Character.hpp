/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:51:27 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/02 23:09:06 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
    protected :
        std::string name;
        AMateria *inventory[4];
        AMateria *ptr;
        int cout;
        AMateria *allready_deleted;
    public:
        Character();
		Character(std::string const & name);
		Character(Character &other);
		Character &operator = (const Character &other);
        ~Character();
        
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

# endif