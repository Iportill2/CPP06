#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP
# include <iostream>
# include <iomanip>
class ScalarConverter
{
	private:

	public:
	//CANONICAL

								ScalarConverter();
								ScalarConverter(std::string value);
								ScalarConverter(const ScalarConverter & copy);
		ScalarConverter & 		operator =(ScalarConverter const & inst);
								~ScalarConverter();

		static void				convert(std::string input);
		static void				toChar(std::string input);
		static void				toInt(std::string input);
		static void				toFloat(std::string input);
		static void				toDouble(std::string input);

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
