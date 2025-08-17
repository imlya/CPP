/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:58:55 by imatek            #+#    #+#             */
/*   Updated: 2025/08/17 20:52:33 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(Intern const& src) {*this = src; }

Intern& Intern::operator=(Intern const& src)
{
	if (this != &src)
		*this = src;
	return (*this);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	std::string form[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (name == form[i])
		{
			std::cout << "Intern creates ";
			switch (i)
			{
				case 0:
				{
					std::cout << "ShrubberyCreationForm" << std::endl;
					return (new ShrubberyCreationForm(target));
				}
				case 1:
				{
					std::cout << "RobotomyRequestForm" << std::endl;
					return (new RobotomyRequestForm(target));
				}
				case 2:
				{
					std::cout << "PresidentialPardonForm" << std::endl;
					return (new PresidentialPardonForm(target));
				}
			}
		}
		throw std::runtime_error("This name doesn't exist!\n");
	}
	return (NULL);
}


//The only thing bureaucrats care about is that they do their job.
//name = the name of a form
//target = the target of the form.

	