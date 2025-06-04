/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:05:51 by imatek            #+#    #+#             */
/*   Updated: 2025/06/04 12:10:39 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public :
		Cat(void);
		Cat(Cat const& copy);
		Cat& operator=(Cat const& copy);
		~Cat(void);

		void makeSound(void) const;
};

#endif