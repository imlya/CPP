/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:15:51 by imatek            #+#    #+#             */
/*   Updated: 2025/06/21 14:17:04 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter ;
class AMateria
{
	protected:
		std::string type;

	public:
		AMateria();
		AMateria(AMateria const& src);
		AMateria(std::string const & type);
		AMateria& operator=(AMateria const& src);
		virtual ~AMateria();
		
		std::string const& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif