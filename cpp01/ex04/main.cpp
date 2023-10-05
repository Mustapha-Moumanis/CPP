/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:43:19 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/05 23:11:20 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	// (void)av;
	
	if (ac == 4)
	{
		std::string str;
		std::ifstream ifs(av[1]);
		// size_t  pos = 0;
		// std::ofstream ofs(av[1].replace);
		
		if (ifs.is_open())
		{
			while (std::getline(ifs, str))
			{
				if (str.find(av[2], 0))
					std::cout << str << std::endl;
				else
					std::cout << "Need to change this!!" << std::endl;
			}
			ifs.close();
		}
		else
			std::cout << "Unable to open file \"" << av[1] << "\""<< std::endl;
	}
	else
		std::cout << "Please enter three parameters : filename and two strings" << std::endl;
	return 0;
}