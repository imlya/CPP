#pragma once

#include <exception>
#include <iostream>
#include <cstdlib>
#include <string>

class ScalarConverter
{
	private :
		ScalarConverter ();
		~ScalarConverter ();
		ScalarConverter(ScalarConverter const& src);
		ScalarConverter& operator=(ScalarConverter const& src);

	public :
		static void convert(std::string const&);
		// class ConversionImpossible : public std::exception {
		// 	virtual const char* what() const throw();
		// };
		// class NonDisplayable : public std::exception {
		// 	virtual const char* what() const throw();
		// };
};
