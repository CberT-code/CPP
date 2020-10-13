/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 09:38:43 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 19:51:43 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {
	this->hitPoints = FragTrap::hitPoints;
	this->maxHitPoints = FragTrap::maxHitPoints;
	this->energyPoints = NinjaTrap::energyPoints;
	this->maxEnergyPoints = NinjaTrap::maxEnergyPoints;
	this->level = 1;
	this->name = "DEFAULT";
	this->meleeAttackDamage = NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = FragTrap::rangedAttackDamage;
	this->armorDamageReduction = FragTrap::armorDamageReduction;
	srand(time(NULL));
	std::cout << "SUPER-TP " << "Monsieur " << this->get_name() << " ,la maman d'un des bebe vient d'arriver." << std::endl;
}

SuperTrap::SuperTrap(std::string name) {
	this->hitPoints = FragTrap::hitPoints;
	this->maxHitPoints = FragTrap::maxHitPoints;
	this->energyPoints = NinjaTrap::energyPoints;
	this->maxEnergyPoints = NinjaTrap::maxEnergyPoints;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = FragTrap::rangedAttackDamage;
	this->armorDamageReduction = FragTrap::armorDamageReduction;
	srand(time(NULL));
	std::cout << "SUPER-TP " << "Monsieur " << this->get_name() << " ,le papa d'un des bebe vient d'arriver." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src) {
	*this = src;
}

SuperTrap::~SuperTrap() {
	std::cout << "SUPER-TP " << "Monsieur " << this->get_name() << " ,recupere son bebe." << std::endl;
}

void					SuperTrap::rangedAttack(std::string const & target) {
	FragTrap::rangedAttack(target);
}
void					SuperTrap::meleeAttack(std::string const & target) {
	NinjaTrap::meleeAttack(target);
}

SuperTrap &			SuperTrap::operator=( SuperTrap const & rhs) {
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


std::ostream &		operator<<(std::ostream & o, SuperTrap const & rhs ) {
	o << rhs.get_name();
	return o;
}

