/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:01:44 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/26 17:59:14 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {
    {
        int digArray[2] = {1337, 42};
        iter<int>(digArray, 2, printElement<int &>);
    }
    {
        size_t count = 6;
        char *strArray = new char[count];
        for (size_t i = 0; i < count; i++)
            strArray[i] = i + 'a';
        iter<char, int (*)(const char &)>(strArray, count, printElement);
        delete[] strArray;
    }

    return 0;
}
