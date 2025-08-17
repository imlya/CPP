/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:46:34 by imatek            #+#    #+#             */
/*   Updated: 2025/08/17 14:46:44 by imatek           ###   ########.fr       */
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
	
		Bureaucrat& operator=(Bureaucrat const& src);
		
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat (Bureaucrat const& src);
		Bureaucrat(std::string name, int grade);
		
		int getGrade() const;
		std::string const& getName() const;
		
		void signAForm(AForm& form);
		void executeForm(AForm const & form) const;
		
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
