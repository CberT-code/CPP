
#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <iomanip>
#include <limits.h>
#include <math.h>

class Span
{
	public:
		Span(void);
		Span(unsigned int);
		Span(Span const &);
		virtual ~Span(void);
		Span &				operator=( Span const &);

		void						addNumber(int);
		long long int					shortestSpan();
		long int					longestSpan();

		class FullSpanException : public std::exception
   		{
			public:
				FullSpanException();
				FullSpanException(const FullSpanException &m);
				FullSpanException& operator=(const FullSpanException &m);
				virtual ~FullSpanException(void) throw();
				char const *what(void) const throw();
   		 };

		class TOOSHORTException : public std::exception
   		{
			public:
				TOOSHORTException();
				TOOSHORTException(const TOOSHORTException &m);
				TOOSHORTException& operator=(const TOOSHORTException &m);
				virtual ~TOOSHORTException(void) throw();
				char const *what(void) const throw();
   		 };

	private:
		unsigned int		N;
		std::vector<int>		tab;
};


#endif
