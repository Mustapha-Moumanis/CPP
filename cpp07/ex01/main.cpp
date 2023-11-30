/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:01:44 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/26 11:37:38 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {
    {
        int digArray[2] = {1337, 42};
        iter<int, void (*)(const int &)>(digArray, 2, printElement);
    }
    {
        size_t count = 6;
        char *strArray = new char[count];
        for (size_t i = 0; i < count; i++)
            strArray[i] = i + 'a';
        iter<char, void (*)(const char &)>(strArray, count, printElement);
        delete[] strArray;
    }

    return 0;
}
