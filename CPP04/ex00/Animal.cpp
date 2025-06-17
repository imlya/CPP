/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:03:08 by imatek            #+#    #+#             */
/*   Updated: 2025/06/13 12:20:17 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal has been created!" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "Animal copy constructor is called for  " << _type << std::endl;
}

Animal &Animal::operator=(Animal const &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal " << _type << " has been destroyed!" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animals make different sounds!" << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}
