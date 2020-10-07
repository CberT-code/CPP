
#ifndef ASSAULTTERMINATOR_H
#define ASSAULTTERMINATOR_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &);
		virtual ~AssaultTerminator(void);

		AssaultTerminator &			operator=( AssaultTerminator const &);
		virtual ISpaceMarine* 			clone() const;
		virtual void 					battleCry() const;
		virtual void 					rangedAttack() const;
		virtual void 					meleeAttack() const;
	private:
};

#endif
