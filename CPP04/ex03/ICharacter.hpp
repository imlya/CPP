/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:28:52 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:11:33 by imatek           ###   ########.fr       */
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
		ICharacter(ICharacter const &src);
		ICharacter &operator=(ICharacter const &src);
		~ICharacter(void);

		void use(ICharacter& target);
};

#endif