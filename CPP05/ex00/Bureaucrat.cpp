/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:47:09 by imatek            #+#    #+#             */
/*   Updated: 2025/08/17 14:45:05 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}
Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name), _grade(src._grade) {}

std::string const& Bureaucrat::getName() const { return (_name); }

int Bureaucrat::getGrade() const { return (_grade); }

Bureaucrat Bureaucrat::operator--(int)
{
	Bureaucrat tmp = Bureaucrat(*this);
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
	return (tmp);
}

Bureaucrat Bureaucrat::operator++(int)
{
	Bureaucrat tmp = Bureaucrat(*this);
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
	return (tmp);
}

std::ostream &operator<<(std::ostream &flux, Bureaucrat const &src)
{
	flux << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return (flux);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!\n");
}
