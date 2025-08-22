/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:07:57 by imatek            #+#    #+#             */
/*   Updated: 2025/08/22 17:20:31 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << _type << " has been created!" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Dog copy constructor is called for " << _type << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
	Animal::operator=(src);
	return (*this);
}

Dog::~Dog()
{
	std::cout << _type << " has been destroyed!" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "The " << _type << " barks" << std::endl;
}
