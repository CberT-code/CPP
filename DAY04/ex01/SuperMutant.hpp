
#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const &);
		virtual ~SuperMutant(void);

		SuperMutant &			operator=( SuperMutant const &);
		virtual void 			takeDamage(int);
		
	private:
};

std::ostream &		operator<<(std::ostream & o, SuperMutant const &);

#endif
