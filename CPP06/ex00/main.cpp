#include "include/ScalarConverter.hpp"

bool isDisplayable (std::string s)
{
	for (int i = 0; s[i] >= 32; i++)
		return (true);
	return (false);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			if (isDisplayable(av[1]) == true)
			try
			{
				ScalarConverter::convert(av[1]);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
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
