/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:50:43 by imatek            #+#    #+#             */
/*   Updated: 2025/05/26 14:35:55 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
	Harl message;
	std::string level;
	
	std::cout << "Please enter : DEBUG, INFO, WARNING or ERROR" << std::endl;
	while (std::getline(std::cin, level))
		message.complain(level);
	return (0);
}
