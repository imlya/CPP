/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:05:59 by imatek            #+#    #+#             */
/*   Updated: 2025/05/30 16:15:03 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{	
	public :
		FragTrap(std::string name);
		FragTrap(FragTrap const& copy);
		FragTrap& operator=(FragTrap const& copy);
		~FragTrap(void);
		
		void highFivesGuys(void);
};

#endif