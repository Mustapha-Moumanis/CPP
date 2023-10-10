/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:51:18 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/10 02:11:42 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl harl;

		void (Harl::*comp)(std::string) = &Harl::complain;
		
		(harl.*comp)(av[1]);
		
	}
	else
	{
		std::cout << "Unsert the level: DEBUG / INFO / WARNING / ERROR" << std::endl;
	}
}