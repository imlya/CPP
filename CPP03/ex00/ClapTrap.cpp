/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 21:27:26 by imatek            #+#    #+#             */
/*   Updated: 2025/05/29 21:57:46 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hit = copy._hit;
		this->_energy = copy._energy;
		this->_attack = copy._attack;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string &target){
	if (_energy > 0)
	{
		_energy--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	_hit -= amount;
	std::cout << "ClapTrap " << _name << " has taken " << amount << "of damage, he has now " << _hit << " hitpoints!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energy > 0)
	{
		_energy--;
		_hit += amount;
		std::cout << "ClapTrap " << _name << " repairs " << amount << "of hitpoints, he has now " << _hit << " hitpoints!" << std::endl;
	}
}
