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
/*
static_cast es un operador de conversión en C++ que se utiliza para convertir un tipo de dato en otro. 
En tu caso, static_cast<char> se utiliza para convertir un valor a un carácter.

Aquí está cómo funciona:

;
En este ejemplo, num es un entero con el valor 65. static_cast<char>(num) convierte num a un carácter. 
Como el valor ASCII de 'A' es 65, c será 'A' después de la conversión.

Es importante tener en cuenta que static_cast realiza una conversión en tiempo de compilación. 
No realiza ninguna comprobación de seguridad en tiempo de ejecución para asegurarse de que la 
conversión es segura. Por lo tanto, debes usar static_cast con cuidado para evitar errores en 
tiempo de ejecución.

Además, static_cast no puede convertir entre ciertos tipos de datos. Por ejemplo, no puedes usar
static_cast para convertir entre tipos de punteros que no están relacionados. Para esas situaciones, 
necesitarías usar reinterpret_cast o dynamic_cast.
*/
