/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:03:08 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:11:33 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout <<  "Animal has been created!" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	*this = src;
	std::cout << "Animal src " << _type << " has been created!" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << _type << "Animal has been destroyed!" << std::endl;
}

std::string AAnimal::getType() const{
	return (_type);
}