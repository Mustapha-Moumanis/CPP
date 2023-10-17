/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:45:21 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/15 02:12:25 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : HumanName(name)
{
    WeaponB = NULL;
}

void HumanB::setWeapon(Weapon &Weap)
{
    WeaponB = &Weap;
}

void HumanB::attack()
{
    if (WeaponB)
        std::cout << HumanName << " attacks with their " << WeaponB->getType() << std::endl;
}
