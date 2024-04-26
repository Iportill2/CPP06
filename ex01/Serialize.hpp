#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
//# include "Data.hpp"

struct Data
{
	int	i;
};

class	Serializer
{
	private:
		//CANONICAL (private for not be initializable 
		//by the user by any way,with the following static method)
		Serializer(void);
		Serializer(Serializer const &copy);
		Serializer & operator =(Serializer const &inst);

	public:
		//CANONICAL
		~Serializer(void);

		static	uintptr_t serialize(Data *ptr);
		static	Data	*deserialize(uintptr_t raw);


};



#endif
/*
reinterpret_cast es un operador de conversión en C++ que se utiliza para 
convertir cualquier puntero o integral de tipo a cualquier otro tipo de 
puntero o integral.

Aquí está cómo funciona:

En este ejemplo, ptr es un puntero a un entero. 
reinterpret_cast<uintptr_t>(ptr) convierte ptr a un uintptr_t, que es un 
tipo integral lo suficientemente grande como para contener cualquier puntero.

Es importante tener en cuenta que reinterpret_cast es el operador de 
conversión más poderoso en C++. No realiza ninguna comprobación de 
seguridad y simplemente trata el bit-pattern de la fuente como si fuera 
del tipo de destino. Esto puede llevar a comportamientos indefinidos si
 no se utiliza correctamente.

Además, el resultado de una reinterpret_cast no puede ser portátil entre 
diferentes plataformas o incluso diferentes compiladores en la misma plataforma.
 Por lo tanto, debes usar reinterpret_cast con mucho cuidado.
*/