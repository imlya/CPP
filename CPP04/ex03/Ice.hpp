/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:08:34 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 13:22:16 by imatek           ###   ########.fr       */
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
		Ice(Ice const &copy);
		Ice &operator=(Ice const &copy);
		~Ice(void);

		void use(ICharacter& target);
};

#endif