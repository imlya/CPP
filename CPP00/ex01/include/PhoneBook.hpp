/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:39 by imatek            #+#    #+#             */
/*   Updated: 2025/06/02 11:04:01 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{

private:

	Contact contacts[8];
	int _index;
	int _nbContact;

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void);
	void	print_list(void);
};

#endif
