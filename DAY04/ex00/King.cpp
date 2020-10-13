/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   King.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 11:06:01 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/10 09:14:45 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

King::King() {
	this->_name = "King";
	std::cout << "TATADADAM. King " << this->_name << " arrived." << std::endl;
}

King::King(std::string name) {
	this->_name = name;
	std::cout << "TATADADAM. King " << this->_name << " arrived." << std::endl;
}

King::King(King const & src) {
	King::operator=(src);
}

King::~King() {
	std::cout << "OH NOOOOO..." << std::endl;
}

King &					King::operator=( King const & rhs) {
	if (this != &rhs)
	{
		this->_name = rhs.get_name();
	}
	return (*this);
}

std::string					King::get_name(void) const{
	return (this->_name);
}

void						King::get_polymorphed(void) const{
	std::cout << this->get_name() << " has been turned into a bird!" << std::endl;
}

std::ostream &				operator<<(std::ostream & o, King const & rhs )
{
	o << "I'm King " <<  rhs.get_name() << " bow down!" << std::endl;
	return o;
}