
#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &);
		~ScavTrap(void);

		ScavTrap &				operator=( ScavTrap const &);
		int						ChallengeNewComer(std::string const &);
};

std::ostream &		operator<<(std::ostream & o, ScavTrap const &);

#endif
