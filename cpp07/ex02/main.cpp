/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:01:44 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/25 20:31:18 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main( void ) {
    try
    {
        // Construction 
        Array<char> A;
        std::cout << "Size of A = " << A.size() << std::endl;

        // parameterized constructor
        Array<int> B(5);
        std::cout << "Size of B = " << B.size() << std::endl;
        for (size_t i = 0; i < B.size(); i++)
        {
            B[i] = i * 2;
            std::cout << B[i] << std::endl;
        }
        
        // copy constractor
        Array<int> C(B);
        std::cout << "Size of C = " << C.size() << std::endl;
    
        for (size_t i = 0; i < C.size(); i++)
        {
            std::cout << C[i] << std::endl;
        }
        
        // assignment operator
        B = C;
        std::cout << "Size of B = " << B.size() << std::endl;
        for (size_t i = 0; i < B.size(); i++)
        {
            std::cout << B[i] << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}