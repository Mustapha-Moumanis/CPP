/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:34:20 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/15 09:00:10 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 1)
        exit (0);

    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].SetName(name);

    return zombies;
}