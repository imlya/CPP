/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:03:06 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 16:11:33 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal(void);
		AAnimal(AAnimal const &src);
		AAnimal &operator=(AAnimal const &src);
		virtual ~AAnimal(void);

		std::string getType(void) const;
		virtual void makeSound(void) const = 0; // methode virtuelle pure
};

#endif
