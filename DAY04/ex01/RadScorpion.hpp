
#ifndef RADSCORPION_H
#define RADSCORPION_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const &);
		virtual ~RadScorpion(void);

		RadScorpion &			operator=( RadScorpion const &);
		
	private:
};

std::ostream &		operator<<(std::ostream & o, RadScorpion const &);

#endif
