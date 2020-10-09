
#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(void);
		AMateria(AMateria const &);
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		AMateria &				operator=( AMateria const &);

		std::string const & 	get_type() const; //Returns the materia type
		unsigned int 			get_XP() const; //Returns the Materia's XP
		virtual AMateria*		clone() const = 0;
		virtual void			use(ICharacter& target);

	private:
		unsigned int 			_XP;
		std::string				_type;
};

#endif
