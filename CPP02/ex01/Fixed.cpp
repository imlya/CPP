/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 23:00:02 by imatek            #+#    #+#             */
/*   Updated: 2025/05/29 18:33:07 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const i) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = i * (1 << this->_fractBits);
}

Fixed::Fixed(float const f){
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(f * (1 << this->_fractBits));
}

Fixed::Fixed (Fixed const & copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed & Fixed::operator=(Fixed const & copy){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_rawBits = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called " << std::endl;
}

int Fixed::getRawBits(void) const{
	return (_rawBits);
}

void Fixed::setRawBits( int const raw ){
	_rawBits = raw;
}

float Fixed::toFloat(void) const{
	return((float)_rawBits / (1 << this->_fractBits));
}

int Fixed:: toInt(void) const{
	return(_rawBits / (1 << this->_fractBits));
}

std::ostream& operator<<(std::ostream& flux, Fixed const& copy){
	flux << copy.toFloat();
	return (flux);
}
