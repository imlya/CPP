/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 21:27:28 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 17:04:05 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected :
		std::string _name;
		int _hit, _energy, _attackDamage;
		
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& src);
		ClapTrap& operator=(ClapTrap const& src);
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
