
#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &);
		~FragTrap(void);

		FragTrap &				operator=( FragTrap const &);
		int						vaulthunter_dot_exe(std::string const & target);
};

std::ostream &		operator<<(std::ostream & o, FragTrap const &);

#endif
