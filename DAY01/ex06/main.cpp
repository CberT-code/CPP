/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:46:39 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 20:18:51 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon       	club = Weapon("crude spiked club");
		HumanA 			bob("Bob", club);

		bob.attack();
		club.setType("some other type of club"); bob.attack();

	}
	{
		Weapon        club = Weapon("crude spiked club");
		HumanB 		  jim("Jim");
		
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club"); jim.attack();

	}
}