/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:57:12 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/26 20:32:46 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char **av)
{
	try {
		if (ac < 2)
			throw std::runtime_error("Error");

		std::vector<unsigned int> vec;
		int i = 1;
		size_t var;
		while (i < ac) {
			isValid(av[i]);
			var = atol(av[i]);
			if (var > INT_MAX)
				throw std::runtime_error("You have a invalid argument");
			vec.push_back(var);
			i++;
		}
		if (std::is_sorted(vec.begin(), vec.end()))
			throw std::runtime_error("This arguments already sorted!!");

		PmergeMe pm;
		pm.insertData(vec);
		pm.Execute();
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
