/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:32:58 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/07 11:24:30 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "King.hpp"

int main() {
    Sorcerer melissandre("Melissandre", "la dame rouge");
    Victim farmer("Laurent Grejoix");
	Peon gendry("Gendry Baratheon");
	King robert("Robert Baratheon");
	std::cout << melissandre << robert << gendry << farmer;
	melissandre.polymorph(robert);
	melissandre.polymorph(gendry);
	melissandre.polymorph(farmer);
	return 0; 
}