
#ifndef TACTICALMARINE_H
#define TACTICALMARINE_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &);
		virtual ~TacticalMarine(void);

		TacticalMarine &				operator=( TacticalMarine const &);
		virtual ISpaceMarine* 			clone() const;
		virtual void 					battleCry() const;
		virtual void 					rangedAttack() const;
		virtual void 					meleeAttack() const;
	private:
};

#endif
