/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:05:58 by imatek            #+#    #+#             */
/*   Updated: 2025/06/21 17:35:01 by imatek           ###   ########.fr       */
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
		Dog(Dog const& src);
		Dog& operator=(Dog const& src);
		~Dog(void);

		void makeSound(void) const;
		std::string getBrain(int i) const;
		void setBrain(std::string ideas, int i);
};

#endif