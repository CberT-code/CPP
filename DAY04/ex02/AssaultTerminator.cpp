/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:16:55 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src) {
	AssaultTerminator::operator=(src);
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator &			AssaultTerminator::operator=( AssaultTerminator const & rhs) {
	(void)rhs;
	return (*this);
}

ISpaceMarine* 				AssaultTerminator::clone() const{
	return (new AssaultTerminator(*this)); 
}
void 						AssaultTerminator::battleCry() const{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}
void 						AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;
}
void 						AssaultTerminator::meleeAttack() const{
	std::cout << "* attaque with chainfists *" << std::endl;
}