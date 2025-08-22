/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:16:11 by imatek            #+#    #+#             */
/*   Updated: 2025/08/17 20:19:02 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <exception>
#include <fstream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

# define ASCII_TREES "               ,@@@@@@@,						\n" \
                    "       ,,,.   ,@@@@@@/@@,  .oo8888o.			\n" \
                    "    ,&&&%&%&&%,@@@@@/@@@@@@,8888\\88/8o		\n" \
                    "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'		\n" \
                    "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'		\n" \
                    "   %&&%/ %&&&&&@@\\ V /@@' `88\\8 `/88'		\n" \
                    "   `&%\\ ` /%&'    |.|        \\ '|8'			\n" \
                    "       |o|        | |         | |				\n" \
                    "       |.|        | |         | |				\n" \
                    "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n"
					
class Bureaucrat;
class ShrubberyCreationForm : public AForm
{
	private :
		std::string _target;
		
	public :
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm(ShrubberyCreationForm const& src);

};
std::ostream& operator<<(std::ostream& flux, ShrubberyCreationForm const& form);
