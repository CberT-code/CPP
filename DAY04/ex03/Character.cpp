/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/07 17:42:44 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(Character const & src) {
	*this = src;
}

Character::~Character() {}

Character &					Character::operator=( Character const & rhs) {
	return (*this);
}

std::string const & 		Character::getName() const{
	return (this->_name);
}

void 						Character::equip(AMateria* m){

}

void 						Character::unequip(int idx){

}

void 						Character::use(int idx, ICharacter& target){

}

