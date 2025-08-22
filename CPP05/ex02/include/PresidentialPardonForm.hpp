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

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;
class PresidentialPardonForm : public AForm
{
	private :
		std::string _target;
		
	public :
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();
		void execute(Bureaucrat const & executor) const;
		PresidentialPardonForm(PresidentialPardonForm const& src);

};
std::ostream& operator<<(std::ostream& flux, PresidentialPardonForm const& form);

#endif