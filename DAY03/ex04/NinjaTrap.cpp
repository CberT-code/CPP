/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 09:38:43 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 11:07:52 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) {
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->name = "DEFAULT";
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	srand(time(NULL));
	std::cout << "NINJ4-TP " << "Madame " << this->get_name() << " ,la maman d'un des bebe vient d'arriver." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) {
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	srand(time(NULL));
	std::cout << "NINJ4-TP " << "Madame " << this->get_name() << " ,la maman d'un des bebe vient d'arriver." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) {
	*this = src;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "NINJ4-TP " << "Madame " << this->get_name() << " ,recupere son bebe." << std::endl;
}

NinjaTrap &			NinjaTrap::operator=( NinjaTrap const & rhs) {
	this->hitPoints = rhs.hitPoints;
	this->maxHitPoints = rhs.maxHitPoints;
	this->energyPoints = rhs.energyPoints;
	this->maxEnergyPoints = rhs.maxEnergyPoints;
	this->level = rhs.level;
	this->name = rhs.name;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangedAttackDamage = rhs.rangedAttackDamage;
	this->armorDamageReduction = rhs.armorDamageReduction;

	return (*this);
}

int						NinjaTrap::ninjaShoebox(ClapTrap & clap) {
	std::string		attack[4] = {" met les doigts dans les yeux de ",
	" mord le bout d'oreille de ",
	" pousse dans l'escalier ",
	" ecrase "};
	int 			randAttack = rand() % 4;

	if (this->energyPoints < 25){
		std::cout << BLUE << "NINJ4-TP " << this->name << GREEN
		<< " n'a pas la force necessaire pour attaquer. Il se repose et reprend 50 points de force."
		<< RESET << std::endl;
		set_energyPoints(50);
		return 0;
	}	else{
		std::cout << BLUE << "NINJ4-TP " << this->name << PV << YELLOW << RED << attack[randAttack]
		<< BLUE << clap.get_name() << YELLOW << ", " << RESET;
		set_energyPoints(-25);
		return 1;
	}
}

int						NinjaTrap::ninjaShoebox(FragTrap & frag) {
	std::string		attack[2] = {" met une tape sur les fesses de ",
	" puni "};
	int 			randAttack = rand() % 2;

	if (this->energyPoints < 25){
		std::cout << BLUE << "NINJ4-TP " << this->name << GREEN
		<< " n'a pas la force necessaire pour attaquer. Il se repose et reprend 50 points de force."
		<< RESET << std::endl;
		set_energyPoints(50);
		return 0;
	}	else{
		std::cout << BLUE << "NINJ4-TP " << this->name << PV << RED << attack[randAttack]
		<< BLUE << frag.get_name() << YELLOW << ", " << RESET;
		set_energyPoints(-25);
		return 1;
	}
}

int						NinjaTrap::ninjaShoebox(ScavTrap & scav) {
	std::string		attack[3] = {" donne un coup de bulletin scolaire à ",
	" lance des gros mots à ",
	" eclate la tete de "};
	int 			randAttack = rand() % 3;

	if (this->energyPoints < 25){
		std::cout << BLUE << "NINJ4-TP " << this->name << GREEN
		<< " n'a pas la force necessaire pour attaquer. Il se repose et reprend 50 points de force."
		<< RESET << std::endl;
		set_energyPoints(50);
		return 0;
	}	else{
		std::cout << BLUE << "NINJ4-TP " << this->name << PV << RED << attack[randAttack]
		<< BLUE << scav.get_name() << YELLOW << ", " << RESET;
		set_energyPoints(-25);
		return 1;
	}
}

int						NinjaTrap::ninjaShoebox(NinjaTrap & ninja) {
	std::string		attack[3] = {" donne un coup de bebe a ",
	" tire les cheveux de ",
	" procede a un etranglement avec un biberon sur "};
	int 			randAttack = rand() % 3;

	if (this->energyPoints < 25){
		std::cout << BLUE << "NINJ4-TP " << this->name << GREEN
		<< " n'a pas la force necessaire pour attaquer. Il se repose et reprend 50 points de force."
		<< RESET << std::endl;
		set_energyPoints(50);
		return 0;
	}	else{
		std::cout << BLUE << "NINJ4-TP " << this->name << PV << RED << attack[randAttack]
		<< BLUE << ninja.get_name() << YELLOW << ", " << RESET;
		set_energyPoints(-25);
		return 1;
	}
}

std::ostream &		operator<<(std::ostream & o, NinjaTrap const & rhs ) {
	o << rhs.get_name();
	return o;
}

