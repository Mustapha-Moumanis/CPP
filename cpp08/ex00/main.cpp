/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:38:21 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/24 21:11:41 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    try {
        int arr[4] = {1, 97, 1337, 42};
        std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));
        easyfind(v, 1337);
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
}