/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:24:05 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/05 15:56:41 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <stdlib.h>

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

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &);
		~ClapTrap(void);

		ClapTrap &				operator=( ClapTrap const &);
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

	protected :
		int						hitPoints;
		int						maxHitPoints;
		int						energyPoints;
		int						maxEnergyPoints;
		int						level;
		int						meleeAttackDamage;
		int						rangedAttackDamage;
		int						armorDamageReduction;
		std::string				name;
};

std::ostream &		operator<<(std::ostream & o, ClapTrap const &);

#endif
