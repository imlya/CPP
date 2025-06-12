/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:35:14 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 18:45:00 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout <<  "WrongAnimal has been created!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	std::cout << "WrongAnimal src " << _type << " has been created!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << _type << "WrongAnimal has been destroyed!" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << getType() << " make different sounds!" << std::endl;
}

std::string WrongAnimal::getType() const{
	return (_type);
}