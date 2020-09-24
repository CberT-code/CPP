/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:20:31 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 11:52:45 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void){

	Pony	Stacky = Pony("Stacky");

	Stacky.set_name_box("STACK");
	std::cout << GREEN << Stacky.get_name() << " is going to " << Stacky.get_name_box() << std::endl;
	Stacky.set_color("white");
	std::cout << Stacky.get_name() << " is " << Stacky.get_color() << std::endl;
	std::cout << Stacky.get_name() << " is eating on the " << Stacky.get_name_box() << std::endl;
	std::cout << Stacky.get_name() << " is eating soooooo much, the farmer put him on the scale\n";
	Stacky.set_weight(150);
	std::cout << "the scale display : " << Stacky.get_weight() << " kg, " 
	<< Stacky.get_name() << " is a big pony\n\n" << RESET;
}

Pony	*ponyOnTheHeap(void){
	
	Pony*	Heapy = new Pony("Heapy");

	Heapy->set_name_box("HEAP");
	std::cout << BLUE << Heapy->get_name() << " is going to "  << Heapy->get_name_box() << std::endl;
	Heapy->set_color("black");
	std::cout << Heapy->get_name() << " is " << Heapy->get_color() << std::endl;
	std::cout << Heapy->get_name() << " is eating on the " << Heapy->get_name_box() << std::endl;
	std::cout << Heapy->get_name() << " do not find anything to eat, the farmer put him on the scale\n";
	Heapy->set_weight(60);
	std::cout << "the scale display : " << Heapy->get_weight() << " kg, " << Heapy->get_name() 
	<< " is a small pony\n\n" << RESET;
	return (Heapy);
}

int main(void)
{
	Pony *pony;

	ponyOnTheStack();
	pony = ponyOnTheHeap();
	
	delete pony;
	return 0;
}
