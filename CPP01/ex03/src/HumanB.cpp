/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:02:32 by imatek            #+#    #+#             */
/*   Updated: 2025/08/22 17:17:19 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) : _WeaponB(NULL), _name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &B)
{
	_WeaponB = &B;
}

void HumanB::attack()
{
	if (_WeaponB)
		std::cout << _name << " attacks with their " << _WeaponB->getType() << std::endl;
}
