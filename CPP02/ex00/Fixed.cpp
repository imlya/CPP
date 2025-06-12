/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 23:00:02 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 15:43:21 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) 
{
	std::cout << "Default constructor called" << std::endl;
}
// cree un objet a partir de src
Fixed::Fixed (Fixed const &src) : _rawBits(src.getRawBits())
{
	std::cout << "src constructor called" << std::endl;
	/* *this = src; */
}

Fixed& Fixed::operator=(Fixed const& src)
{
	std::cout << "src assignment operator called" << std::endl;
	if (this != &src)
		this->_rawBits = src.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called " << std::endl;
}

void Fixed::setRawBits( int const raw )
{
	_rawBits = raw;
}
