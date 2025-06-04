/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:08:30 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 13:25:54 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : AMateria 
{
	private:
		std::string _cure;

	public:
		Cure(void);
		Cure(Cure const &copy);
		Cure &operator=(Cure const &copy);
		~Cure(void);

		void use(ICharacter& target);
};

#endif