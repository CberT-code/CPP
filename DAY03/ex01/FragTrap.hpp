
#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

# define RESET   		"\033[0m"
# define BLACK   		"\033[30m"				/* Black */
# define RED     		"\033[31m"				/* Red */
# define GREEN   		"\033[32m"				/* Green */
# define YELLOW  		"\033[33m"				/* Yellow */
# define BLUE    		"\033[34m"				/* Blue */
# define MAGENTA 		"\033[35m"				/* Magenta */
# define CYAN    		"\033[36m"				/* Cyan */
# define WHITE   		"\033[37m"				/* White */
# define BOLDBLACK   	"\033[1m\033[30m"      /* Bold Black */
# define BOLDRED     	"\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN   	"\033[1m\033[32m"      /* Bold Green */
# define BOLDYELLOW  	"\033[1m\033[33m"      /* Bold Yellow */
# define BOLDBLUE    	"\033[1m\033[34m"      /* Bold Blue */
# define BOLDMAGENTA 	"\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN    	"\033[1m\033[36m"      /* Bold Cyan */
# define BOLDWHITE   	"\033[1m\033[37m"      /* Bold White */
# define PV 			" " << RED << this->get_hitPoints() << "/" << BOLDBLUE << this->get_energyPoints() << " lvl(" << this->get_level() << ")" << RESET
class FragTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &);
		~FragTrap(void);

		FragTrap &				operator=( FragTrap const &);
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
		int						vaulthunter_dot_exe(std::string const & target);

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

std::ostream &		operator<<(std::ostream & o, FragTrap const &);

#endif
