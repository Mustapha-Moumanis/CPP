/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:49:39 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/13 23:35:05 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    toUpperCase(std::string str)
{
	for (std::string::iterator i = str.begin(); i != str.end(); ++i)
        std::cout << (char)toupper(*i);
}

int main(int ac, char *av[])
{
	int i = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (++i < ac)
			toUpperCase(av[i]);

	std::cout << std::endl;

	return (0);
}
