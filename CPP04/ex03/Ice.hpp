/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:08:34 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:11:33 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string _ice;

	public:
		Ice(void);
		Ice(Ice const &src);
		Ice &operator=(Ice const &src);
		~Ice(void);

		virtual Ice clone() const;
		void use(ICharacter& target);
};

#endif