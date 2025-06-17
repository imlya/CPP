/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:02:18 by imatek            #+#    #+#             */
/*   Updated: 2025/06/17 16:33:24 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : virtual public ICharacter
{
	private :
		std::string _name;
		AMateria* _invent[4];
		
	public:
		Character();
		~Character();
		Character(std::string name);
		Character (Character const& src);
		Character &operator=(Character const& src);
		
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif