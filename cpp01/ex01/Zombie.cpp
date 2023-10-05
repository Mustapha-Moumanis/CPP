/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:33:52 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/05 01:09:28 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "New Zombie!!" << std::endl;
}

void Zombie::SetName(std::string n)
{
    this->name = n;
}

Zombie::~Zombie()
{
    std::cout << "Zombie distroyed!!" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}