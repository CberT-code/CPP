/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/27 10:46:33 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->name = "DEFAULT";
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	srand(time(NULL));
	std::cout << "FR4G-TP " << "Bébé " << this->get_name() << " se reveil de sa sieste." << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	srand(time(NULL));
	std::cout << "FR4G-TP " << "Bébé " << this->get_name() << " se reveil de sa sieste." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP " << "Bébé " << this->get_name() << " s'endort profondement." << std::endl;
}

FragTrap &			FragTrap::operator=( FragTrap const & rhs) {
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

int					FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string		attack[6] = {"roti de boeuf en plastique", "legume en mousse", "chaise en plastique",
	"guitare", "peluche Mickey", "chaussette sale"};
	int 			randAttack = rand() % 6;

	if (this->energyPoints < 25){
		std::cout << BLUE << "FR4G-TP " << this->name << GREEN
		<< " n'a pas la force necessaire pour attaquer. Il se repose et reprend 50 points de force."
		<< RESET << std::endl;
		set_energyPoints(50);
		return 0;
	}	else{
		std::cout << BLUE << "FR4G-TP " << this->name << PV << YELLOW << " donne un coup de " << RED << attack[randAttack]
		<< YELLOW << " à " << BLUE << target << YELLOW << ", " << RESET;
		set_energyPoints(-25);
		return 1;
	}
}

std::ostream &		operator<<(std::ostream & o, FragTrap const & rhs ) {
	o << rhs.get_name();
	return o;
}

