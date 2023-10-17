/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:27:02 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/15 00:50:12 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z("Foo");
    z.announce();

    randomChump("Bar");

    Zombie *newZ;
    newZ = newZombie("Zii");
    newZ->announce();
    delete newZ;
}
