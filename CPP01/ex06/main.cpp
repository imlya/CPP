/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:50:43 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:26:22 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl message;

	if (ac == 2)
	{
		std::string level = av[1];
		if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
			message.complain(level);
		else
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	else
		std::cout << "Error : wrong nb of parameters " << std::endl;
	return (0);
}
