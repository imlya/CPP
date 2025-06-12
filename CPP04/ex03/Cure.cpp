/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:15:11 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:11:33 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	std::cout <<  "Cure has been created!" << std::endl;
}

Cure::Cure(Cure const &src)
{
	*this = src;
	std::cout << "Cure src " << _cure << " has been created!" << std::endl;
}

Cure &Cure::operator=(Cure const &src)
{
	if (this != &src)
		this->_cure = src._cure;
	return (*this);
}

Cure::~Cure()
{
	std::cout << _cure << "Cure has been destroyed!" << std::endl;
}

Cure Cure::*clone() const
{
	
}
// void Cure::use(ICharacter& target)
// {
	// std::cout << "* shoots an ice bolt at << _name << " *" <<std::endl;
// }
