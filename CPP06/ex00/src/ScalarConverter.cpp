#include "../include/ScalarConverter.hpp"

void ScalarConverter::convert(std::string const&)
{
	for (int i = 0; i < 4; i++)
	switch (i)
	{
		case 0:
			std::cout << "char: " << std::endl;
			break;
		case 1:
			std::cout << "int: " << std::endl;
			break;
		case 2:
			std::cout << "float: " << std::endl;
			break;
		case 3:
			std::cout << "double: " << std::endl;	
			break;
		default:
			break;
	}
}

const char* ScalarConverter::NonDisplayable::what() const throw()
{
	return ("Non displayable\n");
}