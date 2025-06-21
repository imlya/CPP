/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:05:51 by imatek            #+#    #+#             */
/*   Updated: 2025/06/21 17:34:58 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private :
		Brain* _brain;
		
	public :
		Cat(void);
		Cat(Cat const& src);
		Cat& operator=(Cat const& src);
		~Cat(void);

		void makeSound(void) const;
		std::string getBrain(int i) const;
		void setBrain(std::string ideas, int i);
};

#endif