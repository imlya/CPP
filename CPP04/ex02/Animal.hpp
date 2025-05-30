/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:03:06 by imatek            #+#    #+#             */
/*   Updated: 2025/05/30 19:45:58 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(Animal const &copy);
		Animal &operator=(Animal const &copy);
		virtual ~Animal(void);

		std::string getType(void) const;
		virtual void makeSound(void) const = 0; // methode virtuelle pure
};

#endif
