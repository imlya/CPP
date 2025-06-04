/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:15:35 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 13:22:32 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout <<  "AMateria has been created!" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
	std::cout << "AMateria copy " << _type << " has been created!" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << _type << "AMateria has been destroyed!" << std::endl;
}

std::string const& AMateria::getType() const{
	return (_type);
}
