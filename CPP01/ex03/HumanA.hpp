/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:02:30 by imatek            #+#    #+#             */
/*   Updated: 2025/05/14 17:34:03 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA{
	
	private:
		std::string _name;
		Weapon& _WeaponA;
	public:
		HumanA(std::string name, Weapon& A);
		~HumanA(void);
		void attack(void);
};

#endif