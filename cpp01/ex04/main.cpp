/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:43:19 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/07 02:58:27 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"
#include <sys/stat.h>

bool isRegFile(char *path)
{
	struct stat s;

	if (stat(path, &s) != 0)
		return 0;
	return S_ISREG(s.st_mode);
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream ifs(av[1]);

		if (!isRegFile(av[1]))
			std::cout << av[1] << " is not a regular file" << std::endl;
		else if (ifs.is_open())
			SedIsForLosers obj(ifs, av[1], av[2], av[3]);
		else
			std::cout << "Unable to open \"" << av[1] << "\""<< std::endl;
	}
	else
		std::cout << "Please enter three parameters : filename and two strings" << std::endl;
	return 0;
}