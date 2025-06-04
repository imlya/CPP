/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:45 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 11:48:09 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::string commande;

	std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
	while (true)
	{
		std::cout << "> ";
		getline(std::cin, commande);
		if (!std::cin)
			exit(EXIT_SUCCESS);
		if (commande == "EXIT")
			break;
		else if (commande == "ADD")
			book.add();
		else if (commande == "SEARCH")
			book.search();
		else
			std::cout << "Error : Please enter ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}

