/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 23:00:02 by imatek            #+#    #+#             */
/*   Updated: 2025/06/13 11:22:23 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(int const i)
{
	this->_rawBits = i * (1 << this->_fractBits);
}

Fixed::Fixed(float const f)
{
	this->_rawBits = roundf(f * (1 << this->_fractBits));
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &src)
{
	if (this != &src)
		this->_rawBits = src.getRawBits();
	return (*this);
}

bool Fixed::operator>(Fixed const &src) const
{
	return (this->_rawBits > src.getRawBits());
}

bool Fixed::operator<(Fixed const &src) const
{
	return (this->_rawBits < src.getRawBits());
}

bool Fixed::operator>=(Fixed const &src) const
{
	return (this->_rawBits >= src.getRawBits());
}

bool Fixed::operator<=(Fixed const &src) const
{
	return (this->_rawBits <= src.getRawBits());
}

bool Fixed::operator==(Fixed const &src) const
{
	return (this->_rawBits == src.getRawBits());
}

bool Fixed::operator!=(Fixed const &src) const
{
	return (this->_rawBits != src.getRawBits());
}

Fixed &Fixed::operator+(Fixed const &src)
{
	this->_rawBits += src.getRawBits();
	return (*this);
}

Fixed &Fixed::operator-(Fixed const &src)
{
	this->_rawBits -= src.getRawBits();
	return (*this);
}

Fixed &Fixed::operator*(Fixed const &src)
{
	this->_rawBits *= src.getRawBits() >> this->_fractBits;
	return (*this);
}

Fixed &Fixed::operator/(Fixed const &src)
{
	if (src.getRawBits())
		this->_rawBits /= src.getRawBits();
	else
		this->_rawBits = 0;
	return (*this);
}

Fixed &Fixed::operator++()
{
	this->_rawBits++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed src = Fixed(*this);
	this->_rawBits++;
	return (src);
}

Fixed &Fixed::operator--()
{
	this->_rawBits--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed src = Fixed(*this);
	this->_rawBits--;
	return (src);
}

Fixed& Fixed::min(Fixed &a, Fixed &b){
	return (a < b ? a : b);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b){
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b){
	return (a > b ? a : b);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b){
	return (a > b ? a : b);
}

int Fixed::getRawBits(void) const
{
	return (_rawBits);
}

void Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)_rawBits / (1 << this->_fractBits));
}

int Fixed::toInt(void) const
{
	return (_rawBits / (1 << this->_fractBits));
}

std::ostream &operator<<(std::ostream &flux, Fixed const &src)
{
	flux << src.toFloat();
	return (flux);
}
