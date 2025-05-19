/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:32:21 by imatek            #+#    #+#             */
/*   Updated: 2025/05/13 16:27:50 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* brainz = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		brainz[i].setName(name);
		brainz[i].announce();
	}
	
	return(brainz);
}
