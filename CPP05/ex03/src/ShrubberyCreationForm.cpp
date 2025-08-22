/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:16:47 by imatek            #+#    #+#             */
/*   Updated: 2025/08/22 17:30:48 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getSigned() != true && executor.getGrade() > get_executeGrade())
		throw std::runtime_error("can't be executed.");
	std::string newFile = _target + "_shrubbery";
	std::ofstream outputfile(newFile.c_str());
	if (!outputfile.is_open())
	{
		std::cerr << "error : Open file failed." << std::endl;
		exit(EXIT_FAILURE);
	}
	outputfile << ASCII_TREES;
	std::cout << "Trees has been planted in " << _target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : AForm(src) {}

std::ostream& operator<<(std::ostream& flux, ShrubberyCreationForm const& form)
{
	flux << "Shruberry Form " << form.getName() << ", Grade to sign " << form.get_signGrade()
		<< ", Grade to execute " <<  form.get_executeGrade()
		<< ", is signed ? " << (form.getSigned() ? "Yes" : "No") << std::endl;
	return (flux);
}
