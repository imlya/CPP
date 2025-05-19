/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:55:21 by imatek            #+#    #+#             */
/*   Updated: 2025/05/15 15:16:32 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string s_read = filename + ".replace";
		
		std::ifstream ifs(av[1]); // lecture du fichier input
		if (!ifs.is_open())
		{
			std::cerr << "error : Open file failed." << std::endl;
			exit(EXIT_FAILURE);
		}
		while (!ifs.eof())
		{
			if (std::getline(ifs, s_read))
				std::cout << s_read << std::endl;
			else
				exit(EXIT_FAILURE);
			if (s_read.find(s1))
			{
				
			}
		}
		ifs.close();
		// std::ofstream ofs(s_read)
		// if (!ofstream.is_())
	}
	else
	{
		std::cerr << "error : Please enter 3 parameters." << std::endl;
		exit(EXIT_FAILURE);
	}
	return (0);
}

// SUJET
// <filename>.replace : remplacer s1 par s2
// tout std::string OK sauf std::string.replace
// gerer les != inputs et errors