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
		Serializer(void);
		Serializer(Serializer const &copy);

		Serializer & operator =(Serializer const &inst);

	public:
		~Serializer(void);

		static	uintptr_t serialize(Data *ptr);
		static	Data	*deserialize(uintptr_t raw);


};



#endif