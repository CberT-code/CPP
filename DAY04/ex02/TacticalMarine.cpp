/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:16:55 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src) {
	TacticalMarine::operator=(src);
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine &			TacticalMarine::operator=( TacticalMarine const & rhs) {
	(void)rhs;
	return (*this);
}

ISpaceMarine* 				TacticalMarine::clone() const{
	return (new TacticalMarine(*this)); 
}
void 						TacticalMarine::battleCry() const{
	std::cout << "For the Holy PLOT!" << std::endl;
}
void 						TacticalMarine::rangedAttack() const{
	std::cout << "* attacks with a bolter *" << std::endl;
}
void 						TacticalMarine::meleeAttack() const{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
