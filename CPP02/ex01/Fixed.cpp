/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 23:00:02 by imatek            #+#    #+#             */
/*   Updated: 2025/06/13 11:38:30 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0)
{
	std::cout << "Fixed has been created" << std::endl;
}

Fixed::Fixed(int const i) : _rawBits(i * (1 << this->_fractBits))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : _rawBits(roundf(f * (1 << this->_fractBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed (Fixed const & src) : _rawBits(src.getRawBits())
{
	std::cout << "Fixed copy constructor called" << std::endl;
	// *this = src;
}

Fixed & Fixed::operator=(Fixed const & src)
{
	std::cout << "src assignment operator called" << std::endl;
	if (this != &src)
		this->_rawBits = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Fixed has been destroyed" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (_rawBits);
}

void Fixed::setRawBits( int const raw )
{
	_rawBits = raw;
}

float Fixed::toFloat(void) const
{
	return((float)_rawBits / (1 << this->_fractBits));
}

int Fixed:: toInt(void) const
{
	return(_rawBits / (1 << this->_fractBits));
}

std::ostream& operator<<(std::ostream& flux, Fixed const& src)
{
	flux << src.toFloat();
	return (flux);
}
