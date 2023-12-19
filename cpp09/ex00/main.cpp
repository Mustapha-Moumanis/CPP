/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:17:42 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/17 15:56:06 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	try
	{
		if(ac != 2)
			throw std::runtime_error("Error: could not open file.");

		BitcoinExchange btc(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}

// int main(int ac, char **av) {
// 	main1(ac, av);
// 	system("leaks btc");
// 	return 0;
// }