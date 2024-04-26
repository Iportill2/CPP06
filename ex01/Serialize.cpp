#include "Serialize.hpp"

Serializer::Serializer(void) 
{
	std::cout << "Default Constructor Serializer" << std::endl;
}

Serializer::Serializer(Serializer const &copy)
{
	std::cout << "Copy Constructor Serializer" << std::endl;
	*this = copy;
}


Serializer & Serializer::operator =(Serializer const &inst)
{
	(void)inst;
	std::cout << "operator= Constructor Serializer" << std::endl;
	//*this = inst;
	return (*this);
}
Serializer::~Serializer(void) 
{
	std::cout << "Destructor Serializer" << std::endl;
}



uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

