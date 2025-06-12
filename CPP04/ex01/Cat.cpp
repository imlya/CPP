/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:08:12 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:11:33 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_brain = new Brain();
	_type = "Cat";
	std::cout << _type << " has been created!" << std::endl;
}

Cat::Cat(Cat const &src)
{
	*this = src;
	std::cout << "Cat src " << _type << " has been created!" << std::endl;
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
