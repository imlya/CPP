/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:08:12 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 12:14:31 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	_brain = new Brain();
	_type = "Cat";
	std::cout << _type << " has been created!" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	*this = copy;
	std::cout << "Cat copy " << _type << " has been created!" << std::endl;
}

Cat &Cat::operator=(Cat const &copy)
{
	if (this != &copy)
	{
		if (!_type.empty())
			delete (_brain);
		this->_type = copy._type;
		this->_brain = new Brain(*copy._brain);
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
