/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:03:06 by imatek            #+#    #+#             */
/*   Updated: 2025/06/12 18:27:59 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal &operator=(WrongAnimal const &src);
		virtual ~WrongAnimal(void);

		std::string getType(void) const;
		void makeSound(void) const;
};

#endif
