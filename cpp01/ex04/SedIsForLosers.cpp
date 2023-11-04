/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsForLosers.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:54:34 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/04 15:13:43 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SedIsForLosers.hpp"

SedIsForLosers::SedIsForLosers(std::ifstream &file, std::string fname, std::string str1, std::string str2) : ifs(file), s1(str1), s2(str2)
{
	size_t      pos;
	std::string line;

	name = fname + ".replace";
	ofs.open(name);
	if (ofs.is_open())
	{
		while (std::getline(ifs, line))
		{
			pos = 0;
			while ((pos = line.find(s1, pos)) != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos,s2);
				pos += s2.length();
			}
			ofs << line;
			if (ifs.eof())
				break;
			ofs << std::endl;
		}
		ofs.close();
	}
	else
		std::cout << "You have a problem if the File : " << name << std::endl;
}

SedIsForLosers::~SedIsForLosers()
{
	ifs.close();
}