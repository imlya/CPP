/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:15:11 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 13:27:27 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	std::cout <<  "Cure has been created!" << std::endl;
}

Cure::Cure(Cure const &copy)
{
	*this = copy;
	std::cout << "Cure copy " << _cure << " has been created!" << std::endl;
}

Cure &Cure::operator=(Cure const &copy)
{
	if (this != &copy)
		this->_cure = copy._cure;
	return (*this);
}

Cure::~Cure()
{
	std::cout << _cure << "Cure has been destroyed!" << std::endl;
}

// void Cure::use(ICharacter& target)
// {
	// std::cout << "* shoots an ice bolt at << _name << " *" <<std::endl;
// }
