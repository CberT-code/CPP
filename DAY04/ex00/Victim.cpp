/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/10 09:16:53 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Victim::Victim(void) {
	this->_name = "Victime";
	std::cout << "A random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name) {
	this->_name = name;
	std::cout << "A random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & src) {
	Victim::operator=(src);
}

Victim::~Victim() {
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim &					Victim::operator=( Victim const & rhs) {
	if (this != &rhs)
	{
		this->_name = rhs.get_name();
	}
	return (*this);
}

std::string					Victim::get_name(void) const{
	return (this->_name);
}

void						Victim::get_polymorphed(void) const{
	std::cout << this->get_name() << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &				operator<<(std::ostream & o, Victim const & rhs )
{
	o << "I'm " <<  rhs.get_name() << " and I like otters!" << std::endl;
	return o;
}
