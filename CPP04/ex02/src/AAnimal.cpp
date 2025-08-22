/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:03:08 by imatek            #+#    #+#             */
/*   Updated: 2025/08/22 17:22:37 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal has been created!" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	*this = src;
	std::cout << "AAnimal copy constructor is called for  " << _type << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal " << _type << " has been destroyed!" << std::endl;
}

std::string AAnimal::getType() const
{
	return (_type);
}