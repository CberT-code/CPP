
#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &);
		virtual ~Ice(void);
		Ice &				operator=( Ice const &);

		virtual AMateria*		clone() const;

	private:
};

#endif
