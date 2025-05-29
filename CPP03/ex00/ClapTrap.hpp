/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 21:27:28 by imatek            #+#    #+#             */
/*   Updated: 2025/05/29 21:45:56 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	private :
		std::string _name;
		int _hit;
		int _energy;
		int _attack;
		
	public :
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& copy);
		ClapTrap& operator=(ClapTrap const& copy);
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
