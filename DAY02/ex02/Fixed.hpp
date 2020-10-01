
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

		Fixed 				&operator=( Fixed const &);
		bool				operator>( Fixed const &) const;
		bool				operator<( Fixed const &) const;
		bool				operator>=( Fixed const &) const;
		bool				operator<=( Fixed const &) const;
		bool				operator==( Fixed const &) const;
		bool				operator!=( Fixed const &) const;

		Fixed				operator+( Fixed const &) const;
		Fixed				operator-( Fixed const &) const;
		Fixed				operator*( Fixed const &) const;
		Fixed				operator/( Fixed const &) const;

		Fixed 				&operator++(void);
		Fixed 				operator++(int);
		Fixed 				&operator--(void);
		Fixed 				operator--(int);

		static const Fixed 	&min(Fixed const &, Fixed const &);
		static const Fixed 	&max(Fixed const &, Fixed const &);

		int					getRawBits(void) const;
		void				setRawBits(int const);
		float				toFloat(void) const;
		int					toInt(void) const;

	private:
		int					RawBits;
		const static int	NbrBits;
};

std::ostream				&operator<<(std::ostream &, Fixed const &);
const Fixed 				&min( Fixed const &, Fixed const &);
const Fixed 				&max( Fixed const &, Fixed const &);

#endif