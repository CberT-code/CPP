#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base * p){
	if (dynamic_cast<A*>(p))
		std::cout << 'A' << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << 'B' << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << 'C' << std::endl;
}

void identify_from_reference( Base & p){
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int			main(void)
{
	A *a = new A();
	B *b = new B();
	C *c = new C();
	Base *base = new Base();

	identify_from_pointer(b);
	identify_from_pointer(a);
	identify_from_pointer(c);
	identify_from_pointer(base);

	std::cout << std::endl;
	identify_from_reference(*b);
	identify_from_reference(*c);
	identify_from_reference(*a);
	identify_from_reference(*base);
	return (0);
		
}