#include "include/ScalarConverter.hpp"
#include "include/Utils.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			ScalarConverter::convert(av[1]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
		std::cout << "Try : ./convert <literal>\n";
	return (0);
}
