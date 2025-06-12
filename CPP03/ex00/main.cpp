/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:40:42 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:40:23 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a ("castor");
	ClapTrap b ("dog");
	ClapTrap c (b);

	a.attack("dog");
	b.takeDamage(10);
	b.beRepaired(5);
	c.beRepaired(5);
	return (0);
}
