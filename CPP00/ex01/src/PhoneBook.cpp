/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:48 by imatek            #+#    #+#             */
/*   Updated: 2025/05/27 01:12:18 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdio.h>

// constructeur
PhoneBook::PhoneBook()
{
	this->_index = 0;
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
	_index ++;
}

void PhoneBook::print_list()
{
	std::cout  << std::endl << "Index|First name| Last name|  Nickname" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
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
	std::cin >> _index;
	if (_index < 0 || _index > 7)
		std::cout << "Please enter an index between 0 and 7" << std::endl;
	else
		contacts[_index].all_infos();
}
