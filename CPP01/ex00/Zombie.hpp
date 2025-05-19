/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:55:10 by imatek            #+#    #+#             */
/*   Updated: 2025/05/12 17:07:40 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
	
	private :
		std::string _name;
		
	public :
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
		
	};
	
	Zombie* newZombie(std::string name); //creates and name a zombie, and returns it so you can use it outside of the function scope.
	void randomChump(std::string name); //creates and name a zombie, and makes it announce itself.
	
	#endif
	