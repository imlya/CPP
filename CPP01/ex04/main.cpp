/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:55:21 by imatek            #+#    #+#             */
/*   Updated: 2025/07/27 17:04:01 by imatek           ###   ########.fr       */
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
		std::string s_read = filename.append(".replace");
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string string;
		int	pos = 0;

		std::ifstream ifs(av[1]); // lecture du fichier input
		if (!ifs.is_open())
		{
			std::cerr << "error : Open file failed." << std::endl;
			exit(EXIT_FAILURE);
		}
		std::ofstream ofs(s_read.c_str());
		if (!ofs.is_open())
		{
			std::cerr << "error : Open file failed." << std::endl;
			exit(EXIT_FAILURE);
		}
		while (std::getline(ifs, string))
		{
			while (pos >= 0)
			{
				pos = string.find(s1);
				if (pos >= 0)
				{
					string.erase(pos, s1.length());
					string.insert(pos, s2);
					pos += s2.length();
				}
			}
			if (ofs.is_open())
				ofs << string << std::endl;
			pos = 0;
		}
		ofs.close();
		ifs.close();
	}
	else
	{
		std::cerr << "error : Please enter 3 parameters." << std::endl;
		exit(EXIT_FAILURE);
	}
	return (0);
}
