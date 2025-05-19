/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:30:21 by imatek            #+#    #+#             */
/*   Updated: 2025/05/13 16:55:46 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string str = "'HI THIS IS BRAIN'.";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "The memory adress of the string variable: " << &str << std::endl;
	std::cout << "The memory adress held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory adress held by stringREF: " << &stringREF << std::endl << std::endl;
	
	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	
	return (0);
}
