/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:57:12 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/25 17:34:43 by mmoumani         ###   ########.fr       */
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
		while (i < ac) {
			isValid(av[i]);
			vec.push_back(atol(av[i]));
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
