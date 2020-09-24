/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:20:31 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 09:12:35 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(Pony *pony){

	pony->set_name_box("SLACK");
	std::cout << pony->get_name() << " is going to " << pony->get_name_box() << std::endl;
	pony->set_color("white");
	std::cout << pony->get_name() << " is " << pony->get_color() << std::endl;
	std::cout << pony->get_name() << " is eating on the slack" << std::endl;
	std::cout << pony->get_name() << " is eating soooooo much, the farmer put him on the scale\n";
	pony->set_weight(150);
	std::cout << "the scale display : " << pony->get_weight() << " kg, " << pony->get_name() << " is a big pony\n";
}

void	ponyOnTheHeap(Pony *pony){
	pony->set_name_box("HEAP");
	std::cout << pony->get_name() << " is going to "  << pony->get_name_box() << std::endl;
	pony->set_color("black");
	std::cout << pony->get_name() << " is " << pony->get_color() << std::endl;
	std::cout << pony->get_name() << " is eating on the HEAP" << std::endl;
	std::cout << pony->get_name() << " do not find anything to eat, the farmer put him on the scale\n";
	pony->set_weight(60);
	std::cout << "the scale display : " << pony->get_weight() << " kg, " << pony->get_name() << " is a small pony\n";
}

int main(void)
{
	Pony	Stacky = Pony("Stacky");
	Pony*	Heapy = new Pony("Heapy");

	ponyOnTheStack(&Stacky);
	ponyOnTheHeap(Heapy);
	
	delete Heapy;
	return 0;
}
