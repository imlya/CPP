/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:55:20 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 10:37:34 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* newZ = newZombie("bar"); //heap
	
	newZ->announce();
	randomChump("Foo");
	delete (newZ);
	
	return (0);
}
