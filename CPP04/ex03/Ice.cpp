/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:16:19 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 13:28:21 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	std::cout <<  "Ice has been created!" << std::endl;
}

Ice::Ice(Ice const &copy)
{
	*this = copy;
	std::cout << "Ice copy " << _ice << " has been created!" << std::endl;
}

Ice &Ice::operator=(Ice const &copy)
{
	if (this != &copy)
		this->_ice = copy._ice;
	return (*this);
}

Ice::~Ice()
{
	std::cout << _ice << "AMateria has been destroyed!" << std::endl;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* heals " << _name << "’s wounds *" << std::endl;
}
