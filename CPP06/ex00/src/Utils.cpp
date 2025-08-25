#include "../include/Utils.hpp"

int isDisplayable(char** av)
{
	char type = av[1][0];

	if (isprint(type) && !av[1][1])
		return (1);
	else
		throw std::runtime_error("Non displayable");
	return (0);
}

int isInputValid(int ac, char** av)
{
	if (ac != 2 && !av[1][0])
		return (0);
	isDisplayable(av);
}
	
	// std::string type = av[1];
	// for (int i = 0; av[1][i]; i++)
	// {
	// 	if (type.find(','))
	// 	{
	// 		if (type.find('f'))
	// 			type = FLOAT;
	// 		else 
	// 			type = DOUBLE;
	// 	}
	// }
	// std::cout << type << std::endl;
	// return (1);