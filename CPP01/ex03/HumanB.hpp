/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:02:35 by imatek            #+#    #+#             */
/*   Updated: 2025/05/14 17:44:30 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB{
	
	private:
		Weapon *_WeaponB;
		std::string _name;
		
	public:
		HumanB(std::string _name);
		~HumanB(void);
		void attack(void);
		void setWeapon(Weapon &B);
};

#endif