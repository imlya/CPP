/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:08:43 by imatek            #+#    #+#             */
/*   Updated: 2025/05/30 15:55:06 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{	
	public :
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& copy);
		ScavTrap& operator=(ScavTrap const& copy);
		~ScavTrap(void);
		
		void attack(const std::string& target);
		void guardGate();
};

#endif