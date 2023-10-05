/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 02:11:19 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/05 02:11:21 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "Address of string : " << &str << std::endl;
    std::cout << "Address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "Address held by stringREF : " << &stringREF << std::endl;
    
    std::cout << "The value of string : " << str << std::endl;
    std::cout << "The value  pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value  pointed to by stringREF : " << stringREF << std::endl;

}
