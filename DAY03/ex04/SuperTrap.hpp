
#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public virtual FragTrap,  public virtual NinjaTrap
{
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &);
		~SuperTrap(void);

		SuperTrap &				operator=( SuperTrap const &);
		void					rangedAttack(std::string const &);
		void					meleeAttack(std::string const &);
};

std::ostream &		operator<<(std::ostream & o, SuperTrap const &);

#endif
