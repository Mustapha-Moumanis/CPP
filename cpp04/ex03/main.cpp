/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:25:39 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/02 22:13:44 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

// int main1()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Cure());
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Ice());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	tmp = src->createMateria("h");
// 	me->equip(tmp);
// 	tmp = src->createMateria("j");
// 	me->equip(tmp);
// 	tmp = src->createMateria("kl");
// 	me->equip(tmp);
// 	tmp = src->createMateria("l;;o");
// 	me->equip(tmp);
// 	tmp = src->createMateria("l;;o");
// 	me->equip(tmp);
// 	tmp = src->createMateria("l;;o");
// 	me->equip(tmp);
// 	tmp = src->createMateria("l;;o");
// 	me->equip(tmp);
// 	tmp = src->createMateria("l;;o");
// 	me->equip(tmp);
// 	tmp = src->createMateria("l;;o");
// 	// me->equip(tmp);
// 	// me->equip(tmp);
	
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }
int main1() 
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure2");
    me->equip(tmp);
    tmp = src->createMateria("cure0");
    me->equip(tmp);
    tmp = src->createMateria("cure55");
    me->equip(tmp);
    tmp = src->createMateria("cure8");
    me->equip(tmp);
    tmp = src->createMateria("cure3");
    me->equip(tmp);
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(    , *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}

int main()
{
	main1();
	// system("leaks a.out");
	return 0;
}