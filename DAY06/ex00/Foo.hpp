
#ifndef FOO_H
#define FOO_H

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <fstream>
#include <string.h>
#include <iomanip>
#include <limits.h>
#include <float.h>

class Foo
{
	public:
		Foo(void);
		Foo(char *);
		Foo(Foo const &);
		virtual ~Foo(void);
		Foo &				operator=( Foo const &);

		double				get_dbl();
		void				check_char();
		void				check_int();
		void				check_float();
		void				check_double();
		operator			char();
		operator			int();
		operator			float();
		operator			double();

		class NotValidException : public std::exception
    	{
			public:
				NotValidException();
				NotValidException(const NotValidException &m);
				NotValidException& operator=(const NotValidException &m);
				virtual ~NotValidException(void) throw();
				char const *what(void) const throw();
    	};

	private:
		char 				*_str;
		double				_dbl;
};

#endif
