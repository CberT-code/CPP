
#ifndef B_H
#define B_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Base.hpp"

class B : public Base
{
	public:
		B(void);
		B(B const &);
		virtual ~B(void);
		B &				operator=( B const &);

	private:
};

#endif
