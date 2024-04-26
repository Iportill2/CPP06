
//#include "Serializer.hpp"
//#include "seri.hpp"
#include "Serialize.hpp"


int	main()
{
	Data test;
	test.i = 42;
	Data *ptr;
	uintptr_t u = 0;

	std::cout << "Date &test: " << &test << std::endl;
	std::cout << "Data *ptr: " << ptr << std::endl;
	std::cout << "u: " << u << std::endl << std::endl ;

	u = Serializer::serialize(&test);
	std::cout << "u after seriallized : " << u << std::endl; 
	ptr = Serializer::deserialize(u);
	std::cout << "ptr after serialized : " << ptr << std::endl << std::endl;

	std::cout << "&test: " << &test.i << std::endl;
	std::cout << "ptr->i: " << ptr->i << std::endl;
}