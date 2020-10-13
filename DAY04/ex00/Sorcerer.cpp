/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/27 10:46:33 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {
	this->_name = "Merlin";
	this->_title = "l'enchanteur";
	std::cout << "Merlin, l'enchanteur, is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) {
	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
	Sorcerer::operator=(src);
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &					Sorcerer::operator=( Sorcerer const & rhs) {
	if (this != &rhs)
	{
		this->_name = rhs.get_name();
	}
	return (*this);
}

std::string					Sorcerer::get_name(void) const{
	return (this->_name);
}

std::string					Sorcerer::get_title(void) const{
	return (this->_title);
}

void						Sorcerer::polymorph(Victim const & victime){
	victime.get_polymorphed();
}

void						Sorcerer::polymorph(King const & king){
	king.get_polymorphed();
}

std::ostream &				operator<<(std::ostream & o, Sorcerer const & rhs )
{
	o << "I am " << rhs.get_name() << ", " << rhs.get_title() << ", and I like ponies!" << std::endl;
	return o;
}
