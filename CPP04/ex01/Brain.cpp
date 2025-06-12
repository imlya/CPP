/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:34:48 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:11:33 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout <<  "Brain has been created!" << std::endl;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	std::cout << "Brain src has been created!" << std::endl;
}

Brain &Brain::operator=(Brain const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = src._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain has been destroyed!" << std::endl;
}
