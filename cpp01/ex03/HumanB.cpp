/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:45:21 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/05 16:24:00 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : HumanName(name) {}

void HumanB::setWeapon(Weapon &Weap)
{
    WeaponB = &Weap;
}

void HumanB::attack()
{
    std::cout << this->HumanName << " attacks with their " << this->WeaponB->getType() << std::endl;
}
