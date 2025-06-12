/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 22:59:59 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 15:40:48 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed 
{
	private :
		int _rawBits; // valeur du nbr en virgule fixe
		static int const _fractBits = 8; //nbr de bits de la partie fractionnaire (8)

	public :
		Fixed(void);
		~Fixed(void);
		Fixed (Fixed const & src); // constructeur de copie
		Fixed & operator=(Fixed const & src); // operateur d'affection (=)
		
		int getRawBits(void) const;
		void setRawBits( int const raw );
};

#endif