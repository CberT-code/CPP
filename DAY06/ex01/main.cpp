#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <limits.h>

struct 				Data{
	std::string 	s1;
	int				n;
	std::string 	s2;
};

void 		*serialize(void)
{
	char	str[9] = "1bonjour";
	char	str2[9] = "2bonsoir";
	Data 	*data = new Data;

	data->s1 = static_cast<std::string>(str);
	data->s2 = static_cast<std::string>(str2);
	data->n = rand() % RAND_MAX;
	return (reinterpret_cast<void *>(data));
}

Data		* deserialize(void *raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int			main()
{
	srand(time(NULL));
	void *ptr;
	Data *data;
	ptr = serialize();
	data = deserialize(ptr);
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	std::cout << std::endl;
	delete (data);

	ptr = serialize();
	data = deserialize(ptr);
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	std::cout << std::endl;
	delete (data);

	ptr = serialize();
	data = deserialize(ptr);
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	std::cout << std::endl;
	delete (data);
	return (0);
}