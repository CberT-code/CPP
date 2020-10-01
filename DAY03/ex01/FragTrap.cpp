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

FragTrap::FragTrap(std::string name) : _hitPoints(100),
_maxHitPoints(100),
_energyPoints(100),
_maxEnergyPoints(100),
_level(1),
_name(name),
_meleeAttackDamage(30),
_rangedAttackDamage(20),
_armorDamageReduction(5) {
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
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;

	return (*this);
}

std::string			FragTrap::get_name(void) const{
	return (this->_name);
}

int					FragTrap::get_hitPoints(void) {
	return (this->_hitPoints);
}
int					FragTrap::get_energyPoints(void) {
	return (this->_energyPoints);
}
int					FragTrap::get_level(void) {
	return (this->_level);
}

void					FragTrap::rangedAttack(std::string const & target) {
	if (this->_energyPoints < 20){
		std::cout << BLUE << "FR4G-TP " << this->_name << GREEN
		<< " n'a pas la force necessaire pour attaquer. Il se repose et reprend 50 points de force."
		<< RESET << std::endl;
		set_energyPoints(50);
	}
	else{
		std::cout << BLUE << "FR4G-TP " << this->_name << PV << YELLOW << " envoi une couche sale a distance sur " << BLUE
		<< target << YELLOW << ", " << RESET;
		set_energyPoints(-20);
	}
}
void					FragTrap::meleeAttack(std::string const & target) {
	if (this->_energyPoints < 35) {
		std::cout << BLUE << "FR4G-TP " << this->_name << GREEN
		<< " n'a pas la force necessaire pour attaquer. Il se repose et reprend 50 points de force."
		<< RESET << std::endl;
		set_energyPoints(50);
	}

	else{
		std::cout << BLUE << "FR4G-TP " << this->_name << PV << YELLOW << " donne un coup de tracteur en plastique à " << BLUE
		<< target << YELLOW << ", " << RESET;
		set_energyPoints(-35);
	}
}
void					FragTrap::takeDamage(unsigned int amount) {
	int			calc = amount - (amount * ((float)this->_armorDamageReduction / 100));
	this->_hitPoints -= calc;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << BLUE << "FR4G-TP " << this->_name << YELLOW << " recois un coup qui lui couterai " << amount
	<< " points d'energie. Mais sa couche le protege et il ne perd que " << calc << " point."<< RESET << std::endl;
}
void					FragTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;
	if (this->_hitPoints > _maxHitPoints)
		this->_hitPoints = _maxHitPoints;
	std::cout << BLUE << "FR4G-TP " << this->_name << GREEN << " boit biberon et recupere " << amount
	<< " points d'energie." << RESET << std::endl;
}

int					FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string		attack[6] = {"roti de boeuf en plastique", "legume en mousse", "chaise en plastique",
	"guitare", "peluche Mickey", "chaussette sale"};
	int 			randAttack = rand() % 6;

	if (this->_energyPoints < 25){
		std::cout << BLUE << "FR4G-TP " << this->_name << GREEN
		<< " n'a pas la force necessaire pour attaquer. Il se repose et reprend 50 points de force."
		<< RESET << std::endl;
		set_energyPoints(50);
		return 0;
	}	else{
		std::cout << BLUE << "FR4G-TP " << this->_name << PV << YELLOW << " donne un coup de " << RED << attack[randAttack]
		<< YELLOW << " à " << BLUE << target << YELLOW << ", " << RESET;
		set_energyPoints(-25);
		return 1;
	}
}

void					FragTrap::set_energyPoints(int value) {
	if (value < 0)
		this->_energyPoints += value;
	else
		this->_energyPoints += value;
	if (this->_energyPoints > _maxEnergyPoints)
		this->_energyPoints = _maxEnergyPoints;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;
}
void					FragTrap::set_level(int value) {
	this->_level += value;
	if (this->_level > 100)
		this->_level = 100;
	if (this->_level < 0)
		this->_level = 0;
}

std::ostream &		operator<<(std::ostream & o, FragTrap const & rhs ) {
	o << rhs.get_name();
	return o;
}

