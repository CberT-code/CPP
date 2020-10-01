/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 15:18:43 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/30 19:49:19 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _hitPoints(100),
_maxHitPoints(100),
_energyPoints(50),
_maxEnergyPoints(50),
_level(1),
_name(name),
_meleeAttackDamage(20),
_rangedAttackDamage(15),
_armorDamageReduction(3) {
	srand(time(NULL));
	std::cout << "SC4V-TP " << "L'assistante maternelle " << this->get_name() << " laisse entrer les enfants." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "SC4V-TP " << "L'assistante maternelle " << this->get_name() << " redonne les enfants a leur parents." << std::endl;
}

ScavTrap &			ScavTrap::operator=( ScavTrap const & rhs) {
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

std::string			ScavTrap::get_name(void) const{
	return (this->_name);
}

int					ScavTrap::get_hitPoints(void) {
	return (this->_hitPoints);
}
int					ScavTrap::get_energyPoints(void) {
	return (this->_energyPoints);
}
int					ScavTrap::get_level(void) {
	return (this->_level);
}

void					ScavTrap::rangedAttack(std::string const & target) {
	if (this->_energyPoints < 20){
		std::cout << BLUE << "SC4V-TP " << this->_name << GREEN
		<< " n'a pas la force necessaire pour attaquer. Il se repose et reprend 50 points de force."
		<< RESET << std::endl;
		set_energyPoints(50);
	}
	else{
		std::cout << BLUE << "SC4V-TP " << this->_name << PV << YELLOW << " envoi une couche sale a distance sur " << BLUE
		<< target << YELLOW << ", " << RESET;
		set_energyPoints(-20);
	}
}
void					ScavTrap::meleeAttack(std::string const & target) {
	if (this->_energyPoints < 35) {
		std::cout << BLUE << "SC4V-TP "<< this->_name << GREEN
		<< " n'a pas la force necessaire pour attaquer. Il se repose et reprend 50 points de force."
		<< RESET << std::endl;
		set_energyPoints(50);
	}

	else{
		std::cout << BLUE << "SC4V-TP " << this->_name << PV << YELLOW << " donne un coup de tracteur en plastique à " << BLUE
		<< target << YELLOW << ", " << RESET;
		set_energyPoints(-35);
	}
}
void					ScavTrap::takeDamage(unsigned int amount) {
	int			calc = amount - (amount * ((float)this->_armorDamageReduction / 100));
	this->_hitPoints -= calc;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << BLUE << "SC4V-TP " << this->_name << YELLOW << " pleure et recois un coup qui lui couterai " << amount
	<< " points d'energie. Mais la protection de sa couche le protege et il ne perd que " << calc << " point d'energie."<< RESET << std::endl;
}
void					ScavTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;
	if (this->_hitPoints > _maxHitPoints)
		this->_hitPoints = _maxHitPoints;
	std::cout << BLUE << "SC4V-TP " << this->_name << GREEN << " boit biberon et recupere " << amount
	<< " points d'energie." << RESET << std::endl;
}

int					ScavTrap::ChallengeNewComer(std::string const & target) {
	int choix;
	std::string		Challenge[4] = {"jouer avec les prises éléctriques alimentés.",
	"partir jouer sur l'autoroute.",
	"jouer avec des allumettes et des petards.",
	"partir se baigner seul dans le grand bain."};

	std::cout << BLUE << "SC4V-TP " << this->_name << PV << YELLOW << " propose a " << target << " de :" << std::endl;
	std::cout << RED << "0 : " << Challenge[0] << std::endl;
	std::cout << "1 : " << Challenge[1] << std::endl;
	std::cout << "2 : " << Challenge[2] << std::endl;
	std::cout << "3 : " << Challenge[3] << std::endl << RESET;
	std::cout << "Quel est le choix de mike? ";
	while (1)
	{
		std::cin >> choix;
		if (choix <= 3 && choix >= 0 ) {
			std::cout << YELLOW  " Il a choisit de : " << Challenge[choix] << ", mais tout ceci etait trop epuisant..." << RESET << std::endl;
			break ;
		}
		else 
			std::cout << "ceci n'est pas un choix valable" << std::endl;
	}
	return 1;
}

void					ScavTrap::set_energyPoints(int value) {
	if (value < 0)
		this->_energyPoints += value;
	else
		this->_energyPoints += value;
	if (this->_energyPoints > _maxEnergyPoints)
		this->_energyPoints = _maxEnergyPoints;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;
}
void					ScavTrap::set_level(int value) {
	this->_level += value;
	if (this->_level > 100)
		this->_level = 100;
	if (this->_level < 0)
		this->_level = 0;
}

std::ostream &		operator<<(std::ostream & o, ScavTrap const & rhs ) {
	o << rhs.get_name();
	return o;
}

