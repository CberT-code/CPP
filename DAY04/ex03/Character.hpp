
#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string);
		Character(Character const &);
		virtual ~Character(void);
		Character &				operator=( Character const &);

		virtual std::string const & 	getName() const;
		virtual void 					equip(AMateria* m);
		virtual void 					unequip(int idx);
		virtual void 					use(int idx, ICharacter& target);

	private:
		std::string				_name;
		int						_nbMateria;
		AMateria *				_inventory[4];
		
};

void							suppr_materia(AMateria **);

#endif
