
#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class IMateriaSource
{
	public:
		IMateriaSource(void);
		IMateriaSource(IMateriaSource const &);
		virtual ~IMateriaSource(void);
		IMateriaSource &				operator=( IMateriaSource const &);

	private:
};

std::ostream &					operator<<(std::ostream & o, IMateriaSource const &);

#endif
