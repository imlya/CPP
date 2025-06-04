/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:28:52 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 13:41:47 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTEER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class ICharacter
{
	public:
		ICharacter(void);
		ICharacter(ICharacter const &copy);
		ICharacter &operator=(ICharacter const &copy);
		~ICharacter(void);

		void use(ICharacter& target);
};

#endif