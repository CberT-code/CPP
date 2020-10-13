
#include "Foo.hpp"

int			main(int argc, char **argv)
{
    if (argc != 2){
		std::cout << "Bad number of arguments." << std::endl;
		return (1);
	}
	try {
		Foo a = Foo(argv[1]);

		a.check_char();
		a.check_int();
		a.check_float();
		a.check_double();
    	return (0);
	}
	catch (std::exception & o){
		std::cerr << o.what() << std::endl;
	}
}