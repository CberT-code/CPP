
#ifndef NINJATRAP_H
#define NINJATRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &);
		~NinjaTrap(void);

		NinjaTrap &				operator=( NinjaTrap const &);
		int						ninjaShoebox( ClapTrap &);
		int						ninjaShoebox( FragTrap &);
		int						ninjaShoebox( ScavTrap &);
		int						ninjaShoebox( NinjaTrap &);
};

std::ostream &		operator<<(std::ostream & o, NinjaTrap const &);

#endif
