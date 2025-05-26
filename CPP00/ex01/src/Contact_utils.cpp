#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <stdio.h>
// contient tjs 1 parametre par defaut = pointeur sur instance courante
void Contact::infos_contact()
{
	std::string first;
	std::string last;
	std::string nick;
	std::string number;
	std::string secret;

	
	std::cout << "============== NEW CONTACT ============" << std::endl;
	while (first.empty() || !printable_infos(first))
	{
		//condition .empty ==> a la 2eme boucle d'ajout la condition n'est plus vraie
		std::cout << "First name : "; getline(std::cin, first);
		if (!std::cin)
		exit(EXIT_SUCCESS);
		if (first.empty())
		std::cout << "please enter your First name" << std::endl;
		if (!printable_infos(first))
		std::cout << "please enter printable characters" << std::endl;
	}
	while (last.empty() || !printable_infos(last))
	{
		std::cout << "Last name : "; getline(std::cin, last);
		if (!std::cin)
		exit(EXIT_SUCCESS);
		if (last.empty())
		std::cout << "please enter your Last name" << std::endl;
		if (!printable_infos(last))
		std::cout << "please enter printable characters" << std::endl;
	}
	while (nick.empty() || !printable_infos(nick))
	{
		std::cout << "Nickname : "; getline(std::cin, nick);
		if (!std::cin)
		exit(EXIT_SUCCESS);
		if (nick.empty())
		std::cout << "please enter your Nickname" << std::endl;
		if (!printable_infos(nick))
		std::cout << "please enter printable characters" << std::endl;
	}
	while (number.empty() || !phone_is_digit(number))
	{
		std::cout << "Phone number : "; getline(std::cin, number);
		if (!std::cin)
		exit(EXIT_SUCCESS);
		if (number.empty())
		std::cout << "please enter your Phone number" << std::endl;
		if (!phone_is_digit(number))
		std::cout << "please enter digits" << std::endl;
	}
	while (secret.empty() || !printable_infos(secret))
	{
		std::cout << "Darkest secret : "; getline(std::cin, secret);
		if (!std::cin)
		exit(EXIT_SUCCESS);
		if (secret.empty())
		std::cout << "please enter your Darkest secret" << std::endl;
		if (!printable_infos(secret))
		std::cout << "please enter printable characters" << std::endl;
	}
	std::cout << "=======================================" << std::endl;
	_first_name = first;
	_last_name = last;
	_nickname = nick;
	_phone_number = number;
	_darkest_secret = secret;
}

void Contact::summary_infos(int i) const
{
	std::cout << std::setw(5) << i << "|";
	std::cout << std::setw(10) << (_first_name.length() > 9 ? _first_name.substr(0, 9) + "." : _first_name) << "|";
	std::cout << std::setw(10) << (_last_name.length() > 9 ? _last_name.substr(0, 9) + "." : _last_name) << "|";
	std::cout << std::setw(10) << (_nickname.length() > 9 ? _nickname.substr(0, 9) + "." : _nickname);
	std::cout << std::endl;
}

void Contact::all_infos() const
{
	std::cout << std::endl << "First name : " << _first_name << std::endl;
	std::cout << "Last name : " << _last_name << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone number : " << _phone_number << std::endl;
	std::cout << "Darkest secret : " << _darkest_secret << std::endl;
}
