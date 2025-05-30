/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:03:08 by imatek            #+#    #+#             */
/*   Updated: 2025/05/30 19:46:48 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout <<  "Animal has been created!" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << "Animal copy " << _type << " has been created!" << std::endl;
}

Animal &Animal::operator=(Animal const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << _type << "Animal has been destroyed!" << std::endl;
}

std::string Animal::getType() const{
	return (_type);
}