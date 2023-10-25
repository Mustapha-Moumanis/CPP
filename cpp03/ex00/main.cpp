/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:26:13 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/24 17:41:48 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    
    ClapTrap a;
    ClapTrap b("Hlima");
    b.takeDamage(9);
    b.takeDamage(1);
    b.takeDamage(1);
    return 0;
}