
#ifndef C_H
#define C_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Base.hpp"

class C : public Base
{
	public:
		C(void);
		C(C const &);
		virtual ~C(void);
		C &				operator=( C const &);

	private:
};

#endif
