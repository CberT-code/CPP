
#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &				operator=( Fixed const &);
		int					getRawBits(void) const;
		void				setRawBits(int const);

	private:
		int					RawBits;
		const static int	NbrBits;
};

#endif