
#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &);
		virtual ~Cure(void);
		Cure &				operator=( Cure const &);

		virtual AMateria*		clone() const;

	private:
};

#endif
