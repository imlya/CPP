/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:15:51 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 13:40:40 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <cstring>

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria(void);
		AMateria(AMateria const &copy);
		AMateria &operator=(AMateria const &copy);
		virtual ~AMateria(void);
		
		std::string const& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif