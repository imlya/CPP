/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:40:42 by imatek            #+#    #+#             */
/*   Updated: 2025/08/22 17:06:22 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"

int main()
{
	ClapTrap a ("castor");
	ClapTrap b ("dog");
	ClapTrap c (b);

	ScavTrap d ("cat");

	FragTrap e("lion");

	a.attack("dog");
	b.takeDamage(10);
	b.beRepaired(5);
	c.beRepaired(5);
	d.attack("dog");
	d.guardGate();
	e.beRepaired(1);
	e.highFivesGuys();
	return (0);
}
