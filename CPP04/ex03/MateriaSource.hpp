/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:43:30 by imatek            #+#    #+#             */
/*   Updated: 2025/06/17 12:24:49 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
	private :
		std::string type;
		
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource (MateriaSource const& src);
		MateriaSource &operator=(MateriaSource const& src);
		
		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const &src);
};

#endif