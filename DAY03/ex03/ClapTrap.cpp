/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/27 10:46:33 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	this->hitPoints = 100;
	this->maxEnergyPoints = 100;
	this->energyPoints = 100;
	this->maxHitPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->name = "DEFAULT" ;
	srand(time(NULL));
	std::cout << "Une nouvelle personne entre dans la garderie!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->hitPoints = 100;
	this->maxEnergyPoints = 100;
	this->energyPoints = 100;
	this->maxHitPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->name = name ;
	srand(time(NULL));
	std::cout << this->get_name() << " entre dans la garderie." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << this->get_name() << " sort de la garderie." << std::endl;
}

ClapTrap &			ClapTrap::operator=( ClapTrap const & rhs) {
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

std::string			ClapTrap::get_name(void) const{
	return (this->name);
}

int					ClapTrap::get_hitPoints(void) {
	return (this->hitPoints);
}
int					ClapTrap::get_energyPoints(void) {
	return (this->energyPoints);
}
int					ClapTrap::get_level(void) {
	return (this->level);
}

void					ClapTrap::rangedAttack(std::string const & target) {
	if (this->energyPoints < 20){
		std::cout << BLUE << this->name << GREEN
		<< " n'a pas la force necessaire pour attaquer. Il se repose et reprend 50 points de force."
		<< RESET << std::endl;
		set_energyPoints(50);
	}
	else{
		std::cout << BLUE << this->name << PV << YELLOW << " envoi une couche sale a distance sur " << BLUE
		<< target << YELLOW << ", " << RESET;
		set_energyPoints(-20);
	}
}
void					ClapTrap::meleeAttack(std::string const & target) {
	if (this->energyPoints < 35) {
		std::cout << BLUE << this->name << GREEN
		<< " n'a pas la force necessaire pour attaquer. Il se repose et reprend 50 points de force."
		<< RESET << std::endl;
		set_energyPoints(50);
	}

	else{
		std::cout << BLUE << this->name << PV << YELLOW << " donne un coup de tracteur en plastique à " << BLUE
		<< target << YELLOW << ", " << RESET;
		set_energyPoints(-35);
	}
}
void					ClapTrap::takeDamage(unsigned int amount) {
	int			calc = amount - (amount * ((float)this->armorDamageReduction / 100));
	this->hitPoints -= calc;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	if (this->armorDamageReduction > 0){
	std::cout << BLUE << this->name << YELLOW << " recois un coup qui lui couterai " << amount
	<< " points d'energie. Mais " << this->name << " se protege et ne perd que " << calc << " point."<< RESET << std::endl;
	}
	else
		std::cout << BLUE << this->name << YELLOW << " recois un coup qui lui coute " << amount << " points d'energie." << std::endl;
}
void					ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	if (this->hitPoints > maxHitPoints)
		this->hitPoints = maxHitPoints;
	std::cout << BLUE << this->name << GREEN << " boit biberon et recupere " << amount
	<< " points d'energie." << RESET << std::endl;
}

int					ClapTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string		attack[6] = {"roti de boeuf en plastique", "legume en mousse", "chaise en plastique",
	"guitare", "peluche Mickey", "chaussette sale"};
	int 			randAttack = rand() % 6;

	if (this->energyPoints < 25){
		std::cout << BLUE << this->name << GREEN
		<< " n'a pas la force necessaire pour attaquer. Il se repose et reprend 50 points de force."
		<< RESET << std::endl;
		set_energyPoints(50);
		return 0;
	}	else{
		std::cout << BLUE  << this->name << PV << YELLOW << " donne un coup de " << RED << attack[randAttack]
		<< YELLOW << " à " << BLUE << target << YELLOW << ", " << RESET;
		set_energyPoints(-25);
		return 1;
	}
}

void					ClapTrap::set_energyPoints(int value) {
	if (value < 0)
		this->energyPoints += value;
	else
		this->energyPoints += value;
	if (this->energyPoints > maxEnergyPoints)
		this->energyPoints = maxEnergyPoints;
	if (this->energyPoints < 0)
		this->energyPoints = 0;
}
void					ClapTrap::set_level(int value) {
	this->level += value;
	if (this->level > 100)
		this->level = 100;
	if (this->level < 0)
		this->level = 0;
}

std::ostream &		operator<<(std::ostream & o, ClapTrap const & rhs ) {
	o << rhs.get_name();
	return o;
}

