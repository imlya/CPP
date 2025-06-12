/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:02:01 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:11:33 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	AAnimal *animal[10];
	//! const Animal *meta = new Animal(); instanciation pas possible car classe abstraite
	for (int i = 0; i < 5; i++)
		animal[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animal[i] = new Cat();
	for(int i = 0; i < 10; i++)
		animal[i]->makeSound();
	Cat cat = Cat();
	Cat catsrc = Cat(cat);
	// catsrc = cat;
	catsrc.makeSound();
	for(int i = 0; i < 10; i++)
		delete(animal[i]);
	return (0);
}
