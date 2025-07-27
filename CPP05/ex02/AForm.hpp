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
		bool _signed;
		int const _signGrade;
		int const _executeGrade;
		AForm();
		
	public :
		AForm(std::string name, int signGrade, int executeGrade);
		AForm (AForm const& src);
		AForm& operator=(AForm const& src);
		virtual ~AForm();
		
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