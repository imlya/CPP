/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 21:27:26 by imatek            #+#    #+#             */
/*   Updated: 2025/05/30 15:46:13 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << "ClapTrap copy " << _name << " has been created!" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hit = copy._hit;
		this->_energy = copy._energy;
		this->_attackDamage = copy._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string &target){
	if (_energy > 0 && _hit > 0)
	{
		_energy--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "No energy or hitpoints to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	_hit -= amount;
	std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage, he has now " << _hit << " hitpoints!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energy > 0 && _hit > 0)
	{
		_energy--;
		_hit += amount;
		std::cout << "ClapTrap " << _name << " repairs " << amount << " points of hitpoints, he has now " << _hit << " hitpoints!" << std::endl;
	}
	else
		std::cout << "No energy or hitpoints to repair!" << std::endl;
}
