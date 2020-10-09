/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/07 17:42:44 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	this->_XP = 0;
	this->_type = "NULL";
}

AMateria::AMateria(AMateria const & src) {
	*this = src;
}

AMateria::AMateria(std::string const & type){
	this->_XP = 0;
	this->_type = type;

}

AMateria::~AMateria() {}

AMateria &					AMateria::operator=( AMateria const & rhs) {
	if (&rhs != this)
	{
		this->_XP = rhs._XP;
		this->_type = rhs._type;
	}
	return (*this);
}

std::string const & 		AMateria::get_type() const {
	return (this->_type);
}

unsigned int 				AMateria::get_XP() const{
	return (this->_XP);
}

void						AMateria::use(ICharacter& target) {
	this->_XP += 10;
	if (this->get_type() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->get_type() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}