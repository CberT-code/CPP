
#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class MateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &);
		virtual ~MateriaSource(void);
		MateriaSource &				operator=( MateriaSource const &);

	private:
};

std::ostream &					operator<<(std::ostream & o, MateriaSource const &);

#endif
