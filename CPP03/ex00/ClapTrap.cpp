/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 21:27:26 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 18:02:55 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Frog"), _hit(10), _energy(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "ClapTrap copy constructor called for " << _name << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hit = src._hit;
		this->_energy = src._energy;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energy > 0 && _hit > 0)
	{
		_energy--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "No energy or hitpoints to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit > 0)
	{
		_hit -= amount;
		std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage, he has now " << _hit << " hitpoints!" << std::endl;
	}
	else
		std::cout << _name << " is dead! can't take damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0 && _hit > 0)
	{
		_energy--;
		_hit += amount;
		std::cout << "ClapTrap " << _name << " repairs " << amount << " points of hitpoints, he has now " << _hit << " hitpoints!" << std::endl;
	}
	else
		std::cout << "No energy or hitpoints to repair!" << std::endl;
}
