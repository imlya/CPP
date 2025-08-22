/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 12:19:25 by imatek            #+#    #+#             */
/*   Updated: 2025/07/27 15:52:12 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	private :
		std::string const _name;
		int const _signGrade;
		bool _signed;
		int const _executeGrade;
		AForm& operator=(AForm const& src);
		AForm();
		
	public :
		virtual ~AForm();
		AForm (AForm const& src);
		AForm(std::string name, int signGrade, int executeGrade);
		
		std::string getName() const;
		int getSigned() const;
		int get_signGrade() const;
		int get_executeGrade() const;
		void beSigned(Bureaucrat const& sign);
		virtual void execute(Bureaucrat const & executor) const = 0;
		class GradeTooHighException : public std::exception {
				virtual const char* what() const throw();
			};
		class GradeTooLowException : public std::exception {
				virtual const char* what() const throw(); 
			};
};

std::ostream& operator<<(std::ostream& flux, AForm const& form);

#endif