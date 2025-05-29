/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 23:00:02 by imatek            #+#    #+#             */
/*   Updated: 2025/05/29 21:21:37 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0)
{
}

Fixed::Fixed(int const i)
{
	this->_rawBits = i * (1 << this->_fractBits);
}

Fixed::Fixed(float const f)
{
	this->_rawBits = roundf(f * (1 << this->_fractBits));
}

Fixed::Fixed(Fixed const &copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(Fixed const &copy)
{
	if (this != &copy)
		this->_rawBits = copy.getRawBits();
	return (*this);
}

bool Fixed::operator>(Fixed const &copy) const
{
	return (this->_rawBits > copy.getRawBits());
}

bool Fixed::operator<(Fixed const &copy) const
{
	return (this->_rawBits < copy.getRawBits());
}

bool Fixed::operator>=(Fixed const &copy) const
{
	return (this->_rawBits >= copy.getRawBits());
}

bool Fixed::operator<=(Fixed const &copy) const
{
	return (this->_rawBits <= copy.getRawBits());
}

bool Fixed::operator==(Fixed const &copy) const
{
	return (this->_rawBits == copy.getRawBits());
}

bool Fixed::operator!=(Fixed const &copy) const
{
	return (this->_rawBits != copy.getRawBits());
}

Fixed &Fixed::operator+(Fixed const &copy)
{
	this->_rawBits += copy.getRawBits();
	return (*this);
}

Fixed &Fixed::operator-(Fixed const &copy)
{
	this->_rawBits -= copy.getRawBits();
	return (*this);
}

Fixed &Fixed::operator*(Fixed const &copy)
{
	this->_rawBits *= copy.getRawBits() >> this->_fractBits;
	return (*this);
}

Fixed &Fixed::operator/(Fixed const &copy)
{
	this->_rawBits /= copy.getRawBits();
	return (*this);
}

Fixed &Fixed::operator++()
{
	this->_rawBits++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed copy = Fixed(*this);
	this->_rawBits++;
	return (copy);
}

Fixed &Fixed::operator--()
{
	this->_rawBits--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed copy = Fixed(*this);
	this->_rawBits--;
	return (copy);
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

Fixed::~Fixed()
{
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

std::ostream &operator<<(std::ostream &flux, Fixed const &copy)
{
	flux << copy.toFloat();
	return (flux);
}
