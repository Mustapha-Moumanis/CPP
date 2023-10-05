/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:27:02 by mmoumani          #+#    #+#             */
/*   Updated: 2023/09/27 03:27:42 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z("Foo");
    z.announce();

    Zombie *newZ;
    newZ = newZombie("zombie 1");
    newZ->announce();

    randomChump("ran");
    delete newZ;
}
