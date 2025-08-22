/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:05:40 by imatek            #+#    #+#             */
/*   Updated: 2025/08/22 17:12:16 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() : ICharacter() {}

Character::Character(std::string name) :_name(name) 
{
	for (int i = 0; i < 4; i++)
		_items[i] = NULL;

	for (int i = 0; i < 1024; i++)
		_dump[i] = NULL;
}

Character::~Character() 
{
	for (int i = 0; i < 4; i++)
	{
		if (_items[i])
			delete (_items[i]);
	}

	for (int i = 0; i < 1024; i++)
	{
		if (_dump[i])
			delete (_dump[i]);
	}
}

Character::Character(Character const &src)
{
	*this = src;
}

Character &Character::operator=(Character const &src)
{
	if (this != &src)
	{
		_name = src._name;
		for (int i = 0; i < 4; i++)
		{
			if (_items[i])
			{
				delete (_items[i]);
				if (src._items[i])
					_items[i] = src._items[i]->clone();
			}
		}

		for (int i = 0; i < 1024; i++)
		{
			if (_dump[i])
			{
				delete (_dump[i]);
				if (src._dump[i])
					_dump[i] = src._dump[i]->clone();
			}
		}
		
	}
	return (*this);
}

std::string const &Character::getName() const 
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	if (m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!_items[i])
			{
				_items[i] = m;
				return ;
			}
		}
		delete m;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _items[idx])
	{
		_dump[idx] = _items[idx];
		_items[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _items[idx])
		_items[idx]->use(target);
}
