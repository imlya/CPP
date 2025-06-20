/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:05:40 by imatek            #+#    #+#             */
/*   Updated: 2025/06/20 23:56:34 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter() {}

Character::Character(std::string name) :_name(name) 
{
	for (int i = 0; i < 4; i++)
		_items[i] = NULL;
}

Character::~Character() {}

Character::Character(Character const &src)
{
	*this = src;
}

Character &Character::operator=(Character const &src)
{
	if (this != &src) //copie profonde (pas sur la meme adresse)
	{
		_name = src._name;
		for (int i = 0; i < 4; i++)
		{
			if (_items[i])
				delete(_items[i]);
			_items[i] = src._items[i]->clone();
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
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_items[i])
		{
			_items[i] = m;
			return ;
		}
	}
	std::cout << "Action not allowed!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (!_items[idx])
			return ;
		if (_items[idx])
			_items[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _items[idx])
		_items[idx]->use(target);
}
