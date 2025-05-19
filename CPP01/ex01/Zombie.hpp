/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:55:10 by imatek            #+#    #+#             */
/*   Updated: 2025/05/13 16:26:32 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstring>

class Zombie{
	
	private :
		std::string _name;
		
	public :
		Zombie();
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
	};
	
	Zombie* zombieHorde(int N, std::string name);
	
	#endif
	