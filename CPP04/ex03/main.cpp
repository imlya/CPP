/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:39:21 by imatek            #+#    #+#             */
/*   Updated: 2025/06/21 17:03:49 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria* test = new Ice();
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete me;
	delete bob;
	delete test;

	// MAIN_TESTEUR_BY_SAMY

	ICharacter*	samy = new Character("samy");
	ICharacter* ralph = new Character("ralph");

	AMateria* a = src->createMateria("ice");
	AMateria* b = src->createMateria("ice");
	AMateria* c = src->createMateria("ice");

	AMateria* d = src->createMateria("ice");
	AMateria* e = src->createMateria("cure");
	AMateria* f = src->createMateria("cure");

	// test fully inventory
	ralph->equip(a);
	ralph->use(0, *samy);
	ralph->equip(b);
	ralph->use(1, *samy);
	ralph->equip(c);
	ralph->use(2, *samy);
	ralph->equip(d);
	ralph->use(3, *samy);

	ralph->equip(e);
	ralph->use(4, *samy);

	// test equip and unequip
	ralph->unequip(3);
	ralph->use(3, *samy);
	ralph->equip(f);
	ralph->use(3, *samy);

	delete ralph;
	delete samy;
	
	// test assignement Charactere (deep copy)
	Character louis("louis");
	Character vincent("vincent");

	louis.equip(src->createMateria("ice"));
	vincent.equip(src->createMateria("cure"));

	louis.use(0, vincent);
	vincent.use(0, louis);
	louis = vincent;

	louis.use(0, vincent);
	vincent.use(0, louis);

	louis.use(1, vincent); //<- Slot number 1 is empty

	// test instance AMateria
	
	// AMateria *no_instance = new AMateria();
	// ICharacter no_instance2;

	delete src;
	return 0;
}
