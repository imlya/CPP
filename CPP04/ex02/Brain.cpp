/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:34:48 by imatek            #+#    #+#             */
/*   Updated: 2025/06/21 17:31:24 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain has been created!" << std::endl;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	std::cout << "Brain copy constructor is called!" << std::endl;
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

std::string Brain::getIdeas(int i) const
{
	return (_ideas[i]);
}

void Brain::setIdeas(std::string ideas, int i)
{
	_ideas[i] = ideas[i];
}
