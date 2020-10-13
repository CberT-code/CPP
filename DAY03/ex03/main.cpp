/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:23:31 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:23:34 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	
	ScavTrap		*prof = new ScavTrap("Mme LEGOURDIN");
	FragTrap       	*bebe1 = new FragTrap("Mike");
	FragTrap       	*bebe2 = new FragTrap("Leopold");

	bebe1->rangedAttack(bebe2->get_name());
	bebe2->takeDamage(10);
	bebe2->meleeAttack(bebe1->get_name());
	bebe1->takeDamage(15);
	std::cout << bebe1->get_name() << " boit un super biberon qui lui rend 1000points d'energie" << std::endl;
	bebe1->beRepaired(1000);
	while (bebe1->get_hitPoints() > 0 && bebe2->get_hitPoints() > 0)
	{
		if (rand() % 4 == 1)
			bebe1->beRepaired(20);
		else if (rand() % 4 == 2)
			bebe2->beRepaired(20);
		if (bebe1->vaulthunter_dot_exe(bebe2->get_name()))
		bebe2->takeDamage(20);
		if (bebe2->get_hitPoints() > 0 && bebe1->get_hitPoints() > 0){
			if (bebe2->vaulthunter_dot_exe(bebe1->get_name()))
			bebe1->takeDamage(20);
		}
	}
	if (bebe1->get_hitPoints() == 0){
		std::cout << BLUE << bebe1->get_name() << RED << " a perdu! Il est a bout de force..." << RESET << std::endl; 
		std::cout << BLUE << bebe2->get_name() << GREEN
		<< " A GAGNEEEE tout cela était très épuisant.!" << std::endl << RESET;
		prof->ChallengeNewComer(bebe1->get_name());
	}
	if (bebe2->get_hitPoints() == 0){
		std::cout << BLUE << bebe2->get_name() << RED << " a perdu! Il est a bout de force..." << RESET << std::endl; 
		std::cout << BLUE << bebe1->get_name() << GREEN
		<< " A GAGNEEEE!" << std::endl << RESET;
		prof->ChallengeNewComer(bebe1->get_name());
	}
	NinjaTrap		*maman1 = new NinjaTrap("Monique");
	NinjaTrap		*maman2 = new NinjaTrap("Valerie");
	ClapTrap		*clap = new ClapTrap("Un monsieur etrange");

	maman1->ninjaShoebox(*clap);
	clap->takeDamage(25);
	delete clap;
	maman1->ninjaShoebox(*bebe2);
	bebe2->takeDamage(25);
	maman2->ninjaShoebox(*maman1);
	maman1->takeDamage(25);
	maman2->ninjaShoebox(*prof);
	prof->takeDamage(25);
	delete maman1;
	delete bebe1;
	delete maman2;
	delete bebe2;
	delete prof;
	return 1;
}