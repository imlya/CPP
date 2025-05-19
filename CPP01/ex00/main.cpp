/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:55:20 by imatek            #+#    #+#             */
/*   Updated: 2025/05/12 17:28:21 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// You have to determine in which case it is better to allocate zombies on the stack or the heap.
int main()
{
	Zombie* newZ = newZombie("bar"); //heap(ALLOCATION)
	newZ->announce();
	randomChump("Foo");
	delete newZ;
	return (0);
}
