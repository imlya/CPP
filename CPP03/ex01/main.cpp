/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:40:42 by imatek            #+#    #+#             */
/*   Updated: 2025/05/30 16:02:10 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap a ("castor");
	ClapTrap b ("dog");
	ClapTrap c (b);

	ScavTrap d ("castor");

	a.attack("dog");
	d.attack("dog");
	d.guardGate();
	b.takeDamage(10);
	b.beRepaired(5);
	c.beRepaired(5);
	return (0);
}
