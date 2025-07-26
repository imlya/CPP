/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 12:32:48 by imatek            #+#    #+#             */
/*   Updated: 2025/07/26 19:05:22 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form(){}

Form::Form(std::string name, int signGrade, int executeGrade) : _name(name), _signGrade(signGrade), _executeGrade(executeGrade)
{
	_signed = false;
}

Form::Form(Form const& src) : _name(src._name), _signGrade(src._signGrade), _executeGrade(src._executeGrade)
{
	*this = src;
}

Form& Form::operator=(Form const& src)
{
	if (this != &src)
		_signed = src._signed;
	return (*this);
}

std::string Form::getName() const { return (_name); }

int Form::getSigned() const { return(_signed); }

int Form::get_signGrade() const { return (_signGrade); }

int Form::get_executeGrade() const { return (_executeGrade); }

void Form::beSigned(Bureaucrat const& src)
{
	if (src.getGrade() > _signGrade)
		throw GradeTooLowException();
	_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low to sign!\n");
} 

std::ostream& operator<<(std::ostream& flux, Form const& src)
{
	flux << "Form " << src.getName() << ", Grade to sign " << src.get_signGrade()
		<< ", Grade to execute " <<  src.get_executeGrade()
		<< ", is signed ? " << (src.getSigned() ? "Yes" : "No") << std::endl;
	return (flux);
}
