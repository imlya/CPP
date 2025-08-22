/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:02:01 by imatek            #+#    #+#             */
/*   Updated: 2025/08/22 17:08:31 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Dog.hpp"
#include "include/Cat.hpp"

int main()
{
	{
		AAnimal* meta[4];

		Dog*	A = new Dog();
		Cat*	B = new Cat();
		// Animal C; <- this is not possible because Animal is an abstract class
		{
			Cat *other = new Cat(*B);
			other->makeSound();
			std::cout << other->getBrain(100) << std::endl;
			delete other;
		}

		for (int i = 0; i < 4; i++)
		{
			if ( i % 2 == 0)
				meta[i] = new Dog();
			else
				meta[i] = new Cat();
		}
		B->setBrain("I HAVE IDEA", 100);
		B->setBrain("I HAVE IDEA", 99);

		std::cout << " idea test: " << B->getBrain(100) << std::endl;
		std::cout << " idea test: " << B->getBrain(99) << std::endl;
		std::cout << " idea test: " << B->getBrain(98) << std::endl;

		for (int i = 0; i < 4; i++)
			delete meta[i];
		delete A;
		delete B;

	}
	return 0;
}
