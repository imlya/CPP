/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:43:30 by imatek            #+#    #+#             */
/*   Updated: 2025/06/21 17:20:18 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
	private :
		std::string _type;
		AMateria* _receip[4];
		
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource (MateriaSource const& src);
		MateriaSource &operator=(MateriaSource const& src);
		
		void learnMateria(AMateria *src);
		AMateria *createMateria(std::string const &type);
};

#endif

