
#ifndef A_H
#define A_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Base.hpp"

class A : public Base
{
	public:
		A(void);
		A(A const &);
		virtual ~A(void);
		A &				operator=( A const &);

	private:
};

#endif
