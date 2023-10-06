/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:45:15 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/06 01:03:17 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weap):WeaponA(Weap), HumanName(name) {}

void HumanA::attack()
{
    std::cout << this->HumanName << " attacks with their " << this->WeaponA.getType() << std::endl;
}
