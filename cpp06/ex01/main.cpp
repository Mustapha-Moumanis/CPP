/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:28 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/30 20:12:55 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main()
{ 
    Data data = {10, 33};
    uintptr_t nb = Serializer::serialize(&data);
    Data *prt = Serializer::deserialize(nb);

    std::cout << "data : " << &data << std::endl;
    std::cerr << "nb : " << "0x" << std::hex << nb << std::endl;
    
    std::cout << "ptr : " << prt << std::endl;
    std::cout << prt->i << " " << prt->j << std::endl;
    return 0;
}
