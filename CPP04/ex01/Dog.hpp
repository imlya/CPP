/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:05:58 by imatek            #+#    #+#             */
/*   Updated: 2025/05/30 18:43:39 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private :
		Brain* _brain;
		
	public :
		Dog(void);
		Dog(Dog const& copy);
		Dog& operator=(Dog const& copy);
		~Dog(void);

		void makeSound(void) const;
};

#endif