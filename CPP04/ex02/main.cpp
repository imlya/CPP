/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:02:01 by imatek            #+#    #+#             */
/*   Updated: 2025/06/13 12:25:26 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "---------CONSTRUCTOR----------" << std::endl;
	AAnimal *animal[10];
	//! const Animal *meta = new Animal(); instanciation pas possible car classe abstraite

	for (int i = 0; i < 5; i++)
	{
		std::cout << i << " : ";
		animal[i] = new Dog();
	}
	for (int i = 5; i < 10; i++)
	{
		std::cout << i << " : ";
		animal[i] = new Cat();
	}
	std::cout << "------------------------------" << std::endl;
	for(int i = 0; i < 10; i++)
		animal[i]->makeSound();
	Cat cat = Cat();
	Cat catsrc = Cat(cat);
	catsrc.makeSound();
	std::cout << "-----------DELETE-------------" << std::endl;
	for(int i = 0; i < 10; i++)
	{
		std::cout << i << " : ";
		delete(animal[i]);
	}
	std::cout << "----------DESTRUCTOR-----------" << std::endl;
	return (0);
}
