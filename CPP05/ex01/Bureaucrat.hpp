/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:46:34 by imatek            #+#    #+#             */
/*   Updated: 2025/07/27 15:52:24 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string const _name;
		int _grade; // du plus grand 1 au plus petit 150
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat (Bureaucrat const& src);
		Bureaucrat& operator=(Bureaucrat const& src);
		~Bureaucrat();
		
		void signAForm(AForm& src);
		std::string getName() const;
		int getGrade() const;
		Bureaucrat operator++(int);
		Bureaucrat operator--(int);
		class GradeTooHighException : public std::exception {
				virtual const char* what() const throw();
			};
		class GradeTooLowException : public std::exception {
				virtual const char* what() const throw(); 
			};
};

std::ostream &operator<<(std::ostream& flux, Bureaucrat const& src);

#endif
