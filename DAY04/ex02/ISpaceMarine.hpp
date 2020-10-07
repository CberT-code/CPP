
#ifndef ISPACEMARINE_H
#define ISPACEMARINE_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* 			clone() const = 0;
		virtual void 					battleCry() const = 0;
		virtual void 					rangedAttack() const = 0;
		virtual void 					meleeAttack() const = 0;
		
	private:
};

#endif
