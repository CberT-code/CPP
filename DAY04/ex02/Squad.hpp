
#ifndef SQUAD_H
#define SQUAD_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "ISquad.hpp"


typedef struct 	s_squad
{
	ISpaceMarine		*unit;
	struct s_squad		*next;
}				t_squad;

class Squad : public ISquad
{
	public:
		Squad(void);
		Squad(Squad const &);
		virtual ~Squad(void);
		Squad &	operator=( Squad const &);

		int					get_count(void) const;
		ISpaceMarine *		getUnit(int) const;
		int					push(ISpaceMarine *);

	private:
		int					_count;
		t_squad *			_unit;
};

void							suppr_squad(t_squad *base);
// t_squad							*deep_copy_squad(t_squad *cpy);

#endif
