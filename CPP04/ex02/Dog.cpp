/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:07:57 by imatek            #+#    #+#             */
/*   Updated: 2025/06/21 18:50:26 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << _type << " has been created!" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
	std::cout << "Dog copy constructor is called for " << _type << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
	if (this != &src)
	{
		delete(_brain);
		this->_type = src._type;
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete(_brain);
	std::cout << _type << " has been destroyed!" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "The " << _type << " barks" << std::endl;
}

std::string Dog::getBrain(int i) const
{
	if (i < 0 || i > 99)
		return ("null");
	return (_brain->getIdeas(i));
}

void Dog::setBrain(std::string ideas, int i)
{
	if (i < 0 || i > 99)
		return ;
	_brain->getIdeas(i) = ideas[i];
}
