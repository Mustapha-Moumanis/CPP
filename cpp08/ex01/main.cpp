/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:38:21 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/05 11:13:11 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}

// int main()
// {
//     try
//     {
//         Span sp = Span(6);
//         sp.addNumber(6);
//         sp.addNumber(3);

//         int arr[4] = {1, 97, 1337, 42};
//         std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));
//         sp.fillVictorSpan(v);

//         std::cout << sp.shortestSpan() << std::endl;
//         std::cout << sp.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
	
//     return 0;
// }

// int main()
// {
// 	try
// 	{
// 		Span sp = Span(10000);

// 		std::vector<int> v;
// 		srand(time(NULL));
// 		for (size_t i = 0; i < 10000; i++)
// 			v.push_back(rand() % 100);

// 		sp.fillVictorSpan(v);
		
// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	
// 	return 0;
// }

