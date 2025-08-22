/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:16:41 by imatek            #+#    #+#             */
/*   Updated: 2025/08/22 17:30:42 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getSigned() != true && executor.getGrade() > get_executeGrade())
		throw std::runtime_error("can't be executed.");
	std::cout << _target << " has been pardoned by " << executor.getName() << "." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : AForm(src) {}

std::ostream& operator<<(std::ostream& flux, PresidentialPardonForm const& form)
{
	flux << "Presidential Form " << form.getName() << ", Grade to sign " << form.get_signGrade()
		<< ", Grade to execute " <<  form.get_executeGrade()
		<< ", is signed ? " << (form.getSigned() ? "Yes" : "No") << std::endl;
	return (flux);
}
