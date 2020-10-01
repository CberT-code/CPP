
#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "FragTrap.hpp"

class ScavTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &);
		~ScavTrap(void);

		ScavTrap &				operator=( ScavTrap const &);
		std::string				get_name(void) const;
		int						get_hitPoints(void);
		int						get_energyPoints(void);
		int						get_level(void);
		
		void					set_energyPoints(int);
		void					set_level(int);

		void					rangedAttack(std::string const & target);
		void					meleeAttack(std::string const & target);
		void					takeDamage(unsigned int amount);
		void					beRepaired(unsigned int amount);
		int						ChallengeNewComer(std::string const &);

	private:
		int						_hitPoints;
		int						_maxHitPoints;
		int						_energyPoints;
		int						_maxEnergyPoints;
		int						_level;
		std::string				_name;
		int						_meleeAttackDamage;
		int						_rangedAttackDamage;
		int						_armorDamageReduction;
};

std::ostream &		operator<<(std::ostream & o, ScavTrap const &);

#endif
