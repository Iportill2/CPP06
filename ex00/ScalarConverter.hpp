#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP
# include <iostream>
class ScalarConverter
{
	private:
		char _char;
		int _int;
		float _float;
		double _double;
	public:
	//CANONICAL

								ScalarConverter();
								ScalarConverter(std::string value);
								ScalarConverter(const ScalarConverter & copy);
		ScalarConverter & 		operator =(ScalarConverter const & inst);
								~ScalarConverter();

		static void			convert(std::string input);
		static void			toChar(std::string input);
		static void			toInt(std::string input);
		static void			toFloat(std::string input);
		static void			toDouble(std::string input);

	class NonDisplayableException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Exception. Non displayable");
			}
	};

	class ImpossibleException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Exception. Impossible");
			}
	};	
};

#endif
/*
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	return;
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	*this = src;
	return;
}

ScalarConverter::~ScalarConverter(void)
{
	return;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs)
{
	(void)rhs;
	return (*this);
}

bool isPseudo(const std::string str)
{
	if (str == "nanf" || str == "-inff" || str == "+inff" || str == "nan" || \
		str == "-inf" || str == "+inf" || str == "inf")
		return true;
	return false;
}

void	printPseudo(std::string input)
{
	if (isPseudo(input))
	{
		std::cout << "char: " << "impossible" << "\n";
		std::cout << "int: " << "impossible" << "\n";
		std::cout << "float: " << ((input[input.size() - 1] == 'f') ? input : (input + 'f')) << std::endl;
		std::cout << "input: " << input << "\n";
	}
}

void	ScalarConverter::convert(std::string input)
{
	if (!input.length())
	{
		std::cout << "Empty input" << std::endl;
		return ;
	}
	if (isPseudo(input))
	{
		printPseudo(input);
		return ;
	}
	ScalarConverter::toChar(input);
	ScalarConverter::toInt(input);
	ScalarConverter::toFloat(input);
	ScalarConverter::toDouble(input);
}

void ScalarConverter::toChar(std::string input)
{
	std::cout << "char: ";
	try
	{
		if (input.length() == 1 && !std::isdigit(input[0]) && std::isprint(input[0]))
			std::cout << "'" << static_cast<char>(input[0]) << "'" << std::endl;
		else if (std::isprint(static_cast<char>(std::atoi(input.c_str()))))
			std::cout << "'" << static_cast<char>(std::atoi(input.c_str())) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void	ScalarConverter::toInt(std::string input)
{
	std::cout << "int: ";
	try
	{
		std::cout << static_cast<int>(std::atoi(input.c_str())) << std::endl;
	}
	catch (std::exception &e)
	{
		if (input.length() == 1 && std::isprint(input[0]))
			std::cout << static_cast<int>(input[0]) << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
}

void ScalarConverter::toFloat(std::string input)
{
	std::cout << "float: ";
	try
	{
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(std::atof(input.c_str())) << "f" <<  std::endl;
	}
	catch (std::exception &e)
	{
		if (input.length() == 1 && std::isprint(input[0]))
			std::cout << std::fixed << std::setprecision(1) << static_cast<float>(input[0])<< "f" << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
}

void ScalarConverter::toDouble(std::string input)
{
	std::cout << "double: ";
	try
	{
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(std::atof(input.c_str())) << std::endl;
	}
	catch (std::exception &e)
	{
		if (input.length() == 1 && std::isprint(input[0]))
			std::cout << std::fixed << std::setprecision(1) << static_cast<double>(input[0]) << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
}

*/