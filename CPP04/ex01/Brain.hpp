/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:34:44 by imatek            #+#    #+#             */
/*   Updated: 2025/06/21 17:30:28 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private :
		std::string _ideas[100];
		
	public :
		Brain(void);
		Brain(Brain const& src);
		Brain& operator=(Brain const& src);
		~Brain(void);

		void setIdeas(std::string ideas, int i);
		std::string getIdeas(int i) const;
};

#endif
