/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:05:40 by imatek            #+#    #+#             */
/*   Updated: 2025/06/17 17:15:31 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter() {}

Character::Character(std::string name) :_name(name) 
{
	for (int i = 0; i < 4; i++)
		_invent[i] = NULL;
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
			if (_invent[i])
				delete(_invent[i]);
			_invent[i] = src._invent[i]->clone();
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
		if (!_invent[i])
		{
			_invent[i] = m;
			return ;
		}
	}
	std::cout << "Action not allowed!" << std::endl;
}

void Character::unequip(int idx)
{
	if (!_invent[idx])
		return ;
	
}

void Character::use(int idx, ICharacter &target){
	
}