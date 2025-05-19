/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:02:22 by imatek            #+#    #+#             */
/*   Updated: 2025/05/14 17:32:35 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& A) : _name(name), _WeaponA(A)
{
}

HumanA::~HumanA()
{
	
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _WeaponA.getType()<< std::endl;
}
