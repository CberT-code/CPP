
#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int);
		Fixed(float);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &				operator=( Fixed const &);
		int					getRawBits(void) const;
		void				setRawBits(int const);
		float				toFloat(void) const;
		int					toInt(void) const;

	private:
		int					RawBits;
		const static int	NbrBits;
};

std::ostream				&operator<<(std::ostream &, Fixed const &);

#endif