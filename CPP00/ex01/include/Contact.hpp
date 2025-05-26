/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:36 by imatek            #+#    #+#             */
/*   Updated: 2025/05/27 01:03:27 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>

class Contact{

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

public:
	Contact(void);
	~Contact(void);

	int 	phone_is_digit(std::string number);
	int		printable_infos(std::string &string);
	void	infos_contact(void);
	void	all_infos(void) const;
	void	summary_infos(int i) const;
};

#endif
