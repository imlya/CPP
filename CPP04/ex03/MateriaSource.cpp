/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:43:30 by imatek            #+#    #+#             */
/*   Updated: 2025/06/17 12:20:00 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource() {}

MateriaSource::~MateriaSource() {}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *)
{
	
}

AMateria* MateriaSource::createMateria(std::string const &src)
{
	
}
