/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:15:35 by imatek            #+#    #+#             */
/*   Updated: 2025/08/22 17:12:04 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const& src) : type(src) {}

AMateria::AMateria(AMateria const& src) : type(src.type) {}

AMateria& AMateria::operator=(AMateria const& src)
{
	if (this != &src)
	this->type = src.type;
	return (*this);
}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}