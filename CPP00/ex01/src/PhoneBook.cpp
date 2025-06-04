/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:48 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 11:50:34 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdio.h>

// constructeur
PhoneBook::PhoneBook()
{
	this->_index = 0;
	_nbContact = 0;
	return;
}

// destructeur
PhoneBook::~PhoneBook()
{
	return;
}

void PhoneBook::add()
{
	if (_index > 7)
		_index = 0;
	contacts[_index].infos_contact();
	_nbContact++;
	_index ++;
}

void PhoneBook::print_list()
{
	if (_nbContact == 0)
	{
		std::cout << "No contact register." << std::endl;
		return ;
	}
	if (_nbContact > 8)
		_nbContact = 8;
	std::cout  << std::endl << "Index|First name| Last name|  Nickname" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	for (int i = 0; i < _nbContact; i++)
	{
		contacts[i].summary_infos(i);
		std::cout << "---------------------------------------" << std::endl;
	}
}

void PhoneBook::search()
{
	print_list();
	std::cout << "Please choose an index" << std::endl;
	// utiliser getline au lieu de cin
	std::string entry;
	getline(std::cin, entry);
	if (entry.length() != 1 || !std::isdigit(entry[0]))
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	int nb = entry[0] - '0';
	if (nb < 0 || nb > _nbContact - 1)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	else 
		contacts[nb].all_infos();
	
}
