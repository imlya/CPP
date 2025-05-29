/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 23:00:02 by imatek            #+#    #+#             */
/*   Updated: 2025/05/29 16:43:13 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (Fixed const & copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed & Fixed::operator=(Fixed const & copy){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_rawBits = copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

Fixed::~Fixed(){
	std::cout << "Destructor called " << std::endl;
}

void Fixed::setRawBits( int const raw ){
	_rawBits = raw;
}
