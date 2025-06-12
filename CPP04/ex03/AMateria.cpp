/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:15:35 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:11:33 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << type << "AMateria has been created!" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
	std::cout << "AMateria src " << type << " has been created!" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << type << "AMateria has been destroyed!" << std::endl;
}

std::string const& AMateria::getType() const{
	return (type);
}
