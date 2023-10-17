/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:33:45 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/15 08:59:54 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z;
    std::string name = "1337";
    int nb = 3;

    z = zombieHorde(nb, name);
    for (int i = 0; i < nb; i++)
        z[i].announce();
    delete[] z;
}
