/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:02:18 by imatek            #+#    #+#             */
/*   Updated: 2025/06/21 17:19:23 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : virtual public ICharacter
{
	private :
		std::string _name;
		AMateria* _items[4];
		AMateria* _dump[1024];
		
	public:
		Character();
		~Character();
		Character(std::string name);
		Character (Character const& src);
		Character &operator=(Character const& src);
		
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx); //sans la delete
		void use(int idx, ICharacter &target);
};

#endif
