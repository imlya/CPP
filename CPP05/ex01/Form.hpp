/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 12:19:25 by imatek            #+#    #+#             */
/*   Updated: 2025/07/26 18:15:20 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private :
		std::string const _name;
		bool _signed;
		int const _signGrade;
		int const _executeGrade;
		Form();
		
	public :
		Form(std::string name, int signGrade, int executeGrade);
		Form (Form const& src);
		Form& operator=(Form const& src);
		~Form();
		
		std::string getName() const;
		int getSigned() const;
		int get_signGrade() const;
		int get_executeGrade() const;
		void beSigned(Bureaucrat const& src);
		class GradeTooHighException : public std::exception {
				virtual const char* what() const throw();
			};
		class GradeTooLowException : public std::exception {
				virtual const char* what() const throw(); 
			};
};

std::ostream& operator<<(std::ostream& flux, Form const& src);

#endif