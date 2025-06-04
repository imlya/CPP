/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:07:57 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 12:14:26 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << _type << " has been created!" << std::endl;
}

Dog::Dog(Dog const &copy)
{
	*this = copy;
	std::cout << "Dog copy " << _type << " has been created!" << std::endl;
}

Dog &Dog::operator=(Dog const &copy)
{
	if (this != &copy)
	{
		delete(_brain);
		this->_type = copy._type;
		this->_brain = new Brain(*copy._brain);
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
