/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsForLosers.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:54:36 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/07 02:39:47 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SEDISFORLOSERS_HPP
# define SEDISFORLOSERS_HPP


#include <iostream>
#include <fstream>
// #include <string>

class SedIsForLosers
{
    private :
        std::ifstream &ifs;
        std::ofstream ofs;
        std::string name;
        std::string s1;
		std::string s2;
    
    public :
        SedIsForLosers(std::ifstream &file, std::string fname, std::string str1, std::string str2);
        ~SedIsForLosers();
};

# endif