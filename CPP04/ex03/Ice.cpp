/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:16:19 by imatek            #+#    #+#             */
/*   Updated: 2025/06/17 16:29:47 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	type = "ice";
}
Ice::~Ice() {}

Ice* Ice::clone() const
{
	return (new Ice(*this)); // appel de la copie exacte de l'instance
	// delete systematiquement si on utilise la fonction clone
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
