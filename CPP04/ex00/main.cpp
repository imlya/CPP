/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:02:01 by imatek            #+#    #+#             */
/*   Updated: 2025/06/21 17:18:20 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* i = new Cat();
		const Animal* j = new Dog();
		const WrongAnimal* k = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << k->getType() << " " << std::endl;

		i->makeSound();
		j->makeSound();
		k->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
		delete j;
		delete k;
	}
	return 0;
}
