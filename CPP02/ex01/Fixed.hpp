/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 22:59:59 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:11:33 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <cstring>

class Fixed
{
private:
	int _rawBits;				  // valeur du nbr en virgule fixe
	static int const _fractBits = 8; // nbr de bits de la partie fractionnaire (8)

public:
	Fixed(void);
	Fixed(int const i);
	Fixed(float const f);
	~Fixed(void);
	Fixed(Fixed const &src); // constructeur de copie (nvlle instance cree)
	Fixed &operator=(Fixed const &src); // operateur d'affection (=) (maj de l'instance courante)

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& flux, Fixed const& src); // operateur d'insertion (<<)

#endif