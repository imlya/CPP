/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:16:19 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:11:33 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	std::cout <<  "Ice has been created!" << std::endl;
}

Ice::Ice(Ice const &src)
{
	*this = src;
	std::cout << "Ice src " << _ice << " has been created!" << std::endl;
}

Ice &Ice::operator=(Ice const &src)
{
	if (this != &src)
		this->_ice = src._ice;
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
