/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:16:55 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Peon::Peon() : Victim("Peon") {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name) {
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src) {
	Peon::operator=(src);
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon &					Peon::operator=( Peon const & rhs) {
	if (this != &rhs){
		this->_name = rhs.get_name();
	}
	return (*this);
}

std::string					Peon::get_name(void) const{
	return (this->_name);
}

void						Peon::get_polymorphed(void) const{
	std::cout << this->get_name() << " has been turned into a pink pony!" << std::endl;
}

std::ostream &				operator<<(std::ostream & o, Peon const & rhs ){
	o << "I'm " <<  rhs.get_name() << " and I like otters!" << std::endl;
	return o;
}