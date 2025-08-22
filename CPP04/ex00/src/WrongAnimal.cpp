/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:35:14 by imatek            #+#    #+#             */
/*   Updated: 2025/08/22 17:20:34 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout <<  "WrongAnimal has been created!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	std::cout << "WrongAnimal copy constructor is called for " << _type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout  <<  "WrongAnimal " << _type << " has been destroyed!" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << getType() << " make different sounds!" << std::endl;
}

std::string WrongAnimal::getType() const{
	return (_type);
}
