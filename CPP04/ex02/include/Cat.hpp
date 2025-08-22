/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:05:51 by imatek            #+#    #+#             */
/*   Updated: 2025/06/21 18:49:51 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
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