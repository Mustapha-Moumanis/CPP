/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:57:12 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/23 18:12:45 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	try {
		if (ac < 3)
			throw std::runtime_error("Error : Must be at les 3 arguments");
		int i = 1;
		PmergeMe pm;
		while (av[i]) {
			std::string element = av[i];
			if (element.empty() || (element.find_first_not_of("0123456789") != std::string::npos))
				throw std::invalid_argument("Error : Invalid argument => " + element);
			std::stringstream ss(element);
			unsigned int value;
			ss >> value;
			pm.insertElement(value);
			i++;
		}
		
		pm.VectorMergeInsertionSort();
		
		// pm.VectorMergeInsertionSort();
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
