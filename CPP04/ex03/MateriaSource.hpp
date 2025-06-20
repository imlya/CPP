/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:43:30 by imatek            #+#    #+#             */
/*   Updated: 2025/06/20 23:56:59 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
	private :
		std::string _type;
		// AMateria* _invent[4];
		
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource (MateriaSource const& src);
		MateriaSource &operator=(MateriaSource const& src);
		
		void learnMateria(AMateria *); //sauvegarde la materia
		AMateria *createMateria(std::string const &src); //dup la materia correspondante
};

#endif

// MateriaSource :
// - apprendre de nouveaux types de materias
// - créer des instances clonées à la demande
// - gérer la mémoire (destructeur vide, supprimer les pointeurs).
