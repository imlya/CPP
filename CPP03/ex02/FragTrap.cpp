/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:09:11 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 18:05:04 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit = 100;
	_energy = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " has been created!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called for " << _name << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	ClapTrap::operator=(src);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Give me a high five !!" << std::endl;
}
