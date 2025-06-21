/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:43:30 by imatek            #+#    #+#             */
/*   Updated: 2025/06/21 17:05:56 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
	_type = "Materia";
	for (int i = 0; i < 4; i++)
		_receip[i] = NULL;
}

MateriaSource::~MateriaSource() 
{
	for (int i = 0; i < 4; i++)
	{
		if (_receip[i])
			delete (_receip[i]);
	}
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		for (int i = 0; i < 4; i++)
		{
			if (_receip[i])
			{
				delete(_receip[i]);	
				_receip[i] = NULL;
				if (src._receip[i])
					_receip[i] = src._receip[i];
			}
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *src)
{
	if (src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!_receip[i])
			{
				_receip[i] = src;
				break ;
			}
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_receip[i] && _receip[i]->getType() == type)
			return (_receip[i]->clone());
	}
	return (0);
}
