/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:08:12 by imatek            #+#    #+#             */
/*   Updated: 2025/06/21 18:50:29 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	_brain = new Brain();
	_type = "Cat";
	std::cout << _type << " has been created!" << std::endl;
}

Cat::Cat(Cat const &src)
{
	*this = src;
	std::cout << "Cat copy constructor is called for " << _type << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
	if (this != &src)
	{
		if (!_type.empty())
			delete (_brain);
		this->_type = src._type;
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete(_brain);
	std::cout << _type << " has been destroyed!" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "The " << _type << " meow" << std::endl;
}

std::string Cat::getBrain(int i) const
{
	if (i < 0 || i > 99)
		return ("null");
	return (_brain->getIdeas(i));
}

void Cat::setBrain(std::string ideas, int i)
{
	if (i < 0 || i > 99)
		return ;
	_brain->getIdeas(i) = ideas[i];
}
