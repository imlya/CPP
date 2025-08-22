/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:16:16 by imatek            #+#    #+#             */
/*   Updated: 2025/08/22 17:30:44 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getSigned() != true && executor.getGrade() > get_executeGrade())
		throw std::runtime_error("Can't be executed.");
	std::cout << "Driiiiz" << std::endl;
	int rando = rand();
	if (rando % 2 == 0)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy has failed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : AForm(src) {}

std::ostream& operator<<(std::ostream& flux, RobotomyRequestForm const& form)
{
	flux << "Robotomy Form " << form.getName() << ", Grade to sign " << form.get_signGrade()
		<< ", Grade to execute " <<  form.get_executeGrade()
		<< ", is signed ? " << (form.getSigned() ? "Yes" : "No") << std::endl;
	return (flux);
}
