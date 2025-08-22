/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 12:32:48 by imatek            #+#    #+#             */
/*   Updated: 2025/07/27 15:52:12 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::~AForm(){}

AForm::AForm(std::string name, int signGrade, int executeGrade) : _name(name), _signGrade(signGrade), _executeGrade(executeGrade)
{
	_signed = false;
}

AForm::AForm(AForm const& src) : _name(src._name), _signGrade(src._signGrade), _executeGrade(src._executeGrade), _signed(src._signed) {}

std::string AForm::getName() const { return (_name); }

int AForm::getSigned() const { return(_signed); }

int AForm::get_signGrade() const { return (_signGrade); }

int AForm::get_executeGrade() const { return (_executeGrade); }

void AForm::beSigned(Bureaucrat const& sign)
{
	if (sign.getGrade() > _signGrade)
		throw GradeTooLowException();
	_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!\n");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low to sign!\n");
} 

std::ostream& operator<<(std::ostream& flux, AForm const& form)
{
	flux << "AForm " << form.getName() << ", Grade to sign " << form.get_signGrade()
		<< ", Grade to execute " <<  form.get_executeGrade()
		<< ", is signed ? " << (form.getSigned() ? "Yes" : "No") << std::endl;
	return (flux);
}
