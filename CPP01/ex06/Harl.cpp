/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:50:46 by imatek            #+#    #+#             */
/*   Updated: 2025/05/26 22:33:57 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::_debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void Harl::_info()
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning()
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::_error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string tab_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == tab_level[i])
		{
			switch (i)
			{
			case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				_debug();
				std::cout << std::endl;
			case 1:
				std::cout << "[ INFO ]" << std::endl;
				_info();
				std::cout << std::endl;
			case 2:
				std::cout << "[ WARNING ]" << std::endl;
				_warning();
				std::cout << std::endl;
			case 3:
				std::cout << "[ ERROR ]" << std::endl;
				_error();
				std::cout << std::endl;
				break;
			default:
				break;
			}
		}
	}
}
