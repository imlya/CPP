/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:03:08 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 12:13:10 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout <<  "Animal has been created!" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	*this = copy;
	std::cout << "Animal copy " << _type << " has been created!" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << _type << "Animal has been destroyed!" << std::endl;
}

std::string AAnimal::getType() const{
	return (_type);
}