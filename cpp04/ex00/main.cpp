/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:25:39 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/04 15:13:43 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "Type : [" << j->getType() << "] " << std::endl;
    std::cout << "Type : [" << i->getType() << "] " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;

    std::cout << std::endl;
    
    const WrongAnimal* wrong = new WrongCat();
    std::cout << "Type : [" << wrong->getType() << "] " << std::endl;
    wrong->makeSound(); //will output the WrongAnimal sound!
    std::cout << std::endl;

    delete wrong;

    return 0;
}
