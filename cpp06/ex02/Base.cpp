/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:24:40 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/21 13:25:15 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base * generate(void) {
	int random = std::time(NULL) % 3;
    if (random == 1)
        return new A;
    else if (random == 2)
        return new C;
    else
        return new B;
}

void identify(Base *p) {
    if (dynamic_cast<A *>(p))
        std::cout << "the actual type of the object is A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "the actual type of the object is B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "the actual type of the object is C" << std::endl;
    else
        std::cout << "Not found" << std::endl;
}

void identify(Base & p) {
    try {
        A &obj = dynamic_cast<A &>(p);
        std::cout << "the actual type of the object is A." << std::endl;
        (void)obj;
    }
    catch(const std::exception& e) {
        try {
            B &obj = dynamic_cast<B &>(p);
            std::cout << "the actual type of the object is B." << std::endl;
            (void)obj;
        }
        catch(const std::exception& e) {
            try {
                C &obj = dynamic_cast<C &>(p);
                std::cout << "the actual type of the object is C." << std::endl;
                (void)obj;
            }
            catch(const std::exception& e) {
                std::cerr << e.what() << '\n';
            }
        }
    }
    
}
