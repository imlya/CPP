/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:50:51 by imatek            #+#    #+#             */
/*   Updated: 2025/05/26 13:33:49 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <cstring>

class Harl{
	private:
		void _debug (void);
		void _info (void);
		void _warning(void);
		void _error (void);

	public:
		Harl(void);
		~Harl(void);
		void complain (std::string level);
};

#endif