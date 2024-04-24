
//#include "Serializer.hpp"
//#include "seri.hpp"
#include "Serialize.hpp"


int	main()
{
	Data test;
	test.i = 42;
	Data *ptr;
	uintptr_t u;

	std::cout << "&test: " << &test << std::endl;
	std::cout << "ptr: " << ptr << std::endl << std::endl;

	u = Serializer::serialize(&test);
	ptr = Serializer::deserialize(u);
	std::cout << "ptr after: " << ptr << std::endl << std::endl;

	std::cout << ptr->i << std::endl;
	std::cout << &test << std::endl;
}