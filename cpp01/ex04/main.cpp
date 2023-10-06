/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:43:19 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/06 02:14:57 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	// (void)av;
	
	if (ac == 4)
	{
		std::string str;
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::ifstream ifs(av[1]);
		// size_t  pos = 0;
		// std::ofstream ofs(filename.replace);
		
		// if (!isDir(filename) && ifs.is_open())
		if (ifs.is_open())
		{
			while (std::getline(ifs, str))
			{
				std::string line = str;
				size_t pos = 0;
				while ((pos = line.find(av[2], pos)) != std::string::npos)
				{
					// line.replace(pos, av[2].length(), av[3]);
					pos += av[3].length();
				}
				std::cout << line << std::endl;
			}
			ifs.close();
		}
		else
			std::cout << "Unable to open \"" << av[1] << "\""<< std::endl;
	}
	else
		std::cout << "Please enter three parameters : filename and two strings" << std::endl;
	return 0;
}