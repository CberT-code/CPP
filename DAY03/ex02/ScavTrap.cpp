/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 15:18:43 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/30 19:55:12 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) { 
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->name = "DEFAULT";
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	
	srand(time(NULL));
	std::cout << "SC4V-TP " << "L'assistante maternelle " << this->get_name() << " laisse entrer les enfants." << std::endl;
}

ScavTrap::ScavTrap(std::string name) { 
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	
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

int					ScavTrap::ChallengeNewComer(std::string const & target) {
	int choix;
	std::string		Challenge[4] = {"jouer avec les prises éléctriques alimentés.",
	"partir jouer sur l'autoroute.",
	"jouer avec des allumettes et des petards.",
	"partir se baigner seul dans le grand bain."};

	std::cout << BLUE << "SC4V-TP " << this->name << PV << YELLOW << " propose a " << target << " de :" << std::endl;
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

std::ostream &		operator<<(std::ostream & o, ScavTrap const & rhs ) {
	o << rhs.get_name();
	return o;
}

