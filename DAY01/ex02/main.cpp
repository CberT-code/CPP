/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:10:49 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 13:17:55 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp" 

int			main(void)
{
	ZombieEvent 	event("Tagged");

	std::cout << "Creation of 3 random zombies with \"Tagged\" type.\n\n";
	Zombie *zombie1 = event.randomChump();
	Zombie *zombie2 = event.randomChump();
	Zombie *zombie3 = event.randomChump();
	Zombie *zombie7 = event.newZombie("toto");
	

	std::cout << "\nCreation of 3 random zombies with \"Untagged\" type.\n\n";
	Zombie zombie4("Unknown1", "Untagged");
	Zombie zombie5("Unknown2", "Untagged");
	Zombie zombie6("Unknown3", "Untagged");

	delete zombie1;
	delete zombie2;
	delete zombie3;
	delete zombie7;
	return (0);
}