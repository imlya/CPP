/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:16:21 by imatek            #+#    #+#             */
/*   Updated: 2025/08/17 20:23:19 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;
class RobotomyRequestForm : public AForm
{
	private :
		std::string _target;
		
	public :
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;
		RobotomyRequestForm(RobotomyRequestForm const& src);

};
std::ostream& operator<<(std::ostream& flux, RobotomyRequestForm const& form);

#endif