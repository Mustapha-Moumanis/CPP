/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:43:19 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/06 16:57:49 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>

bool isDir(char *path)
{
	struct stat s;

	if (stat(path, &s) != 0)
		return 0;
	std::cout << "*" << s.st_mode << std::endl;
	return S_ISDIR(s.st_mode);
}

int main(int ac, char **av)
{
	// (void)av;
	
	if (ac == 4)
	{
		std::string str;
		std::string s1;
		std::string s2 = av[3];
		std::ifstream ifs(av[1]);

		if (!isDir(av[1]) && ifs.is_open())
		{
			while (std::getline(ifs, str))
			{
				std::string line = str;
				size_t pos = 0;
				while ((pos = line.find(av[2], pos)) != std::string::npos)
				{
					// line.replace(pos, av[2].length(), av[3]);
					pos += s2.length();
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