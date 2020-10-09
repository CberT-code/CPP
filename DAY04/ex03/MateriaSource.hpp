
#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &);
		virtual ~MateriaSource(void);
		MateriaSource &				operator=( MateriaSource const &);

		virtual void 			learnMateria(AMateria*);
		virtual AMateria* 		createMateria(std::string const & type);

	private:
		AMateria *				_inventory[4];
		int						_nbMateria;
};

void							suppr_materia2(AMateria **);

#endif
