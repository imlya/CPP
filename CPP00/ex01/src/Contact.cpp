/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:42 by imatek            #+#    #+#             */
/*   Updated: 2025/05/27 01:03:05 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// constructeur
Contact::Contact(void)
{
	return;
}

// destructeur
Contact::~Contact(void)
{
	return;
}

int Contact::phone_is_digit(std::string number)
{
	for (size_t i = 0; i < number.length(); i++)
		if (!isdigit(number[i]))
			return (0);
	return (1);
}

int Contact::printable_infos(std::string &string)
{
	for (size_t i = 0; i < string.length(); i++)
		if (!isprint(string[i]))
			return (0);
	return (1);
}
