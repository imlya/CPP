/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:08:12 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:11:33 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << _type << " has been created!" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor is called for " << _type << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
	WrongAnimal::operator=(src);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << _type << " has been destroyed!" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "The " << _type << " meow" << std::endl;
}
