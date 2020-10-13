/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:16:55 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Header.hpp"

Character::Character() {
	this->_name = "DEFAULT";
	this->_weapon = NULL;
	this->_AP = 40;
}

Character::Character(std::string const & name) {
	this->_name = name;
	this->_weapon = NULL;
	this->_AP = 40;
}

Character::Character(Character const & src) {
	Character::operator=(src);
}

Character::~Character() {}

Character &					Character::operator=( Character const & rhs) {
	if (this != & rhs){
		this->_AP = rhs._AP;
		this->_name = rhs._name;
		this->_weapon = rhs._weapon;
	}
	return (*this);
}

void		 				Character::recoverAP(){
	this->_AP = (this->_AP + 10 > 40) ? 40 : this->_AP + 10;
	std::cout << YELLOW << this->_name << " Recover 10 AP. " << RESET << std::endl;
}

void 						Character::equip(AWeapon *Weapon){
	this->_weapon = Weapon;
}

void 						Character::attack(Enemy *Enemy){
	if (this->_weapon == NULL || this->_AP - this->_weapon->get_APCost() <= 0 ||
	Enemy->get_HP() == -1 || this->_weapon->get_damage() == -1){
		if (this->_AP - this->_weapon->get_APCost() <= 0)
			std::cout << CYAN << this->_name << " can't attack cause he needs more AP. " << RESET << std::endl;
		return ;
	}
	this->_AP -= this->_weapon->get_APCost();
	std::cout << YELLOW << this->_name << " attack " << Enemy->get_type()
	<< " with a " << this->_weapon->get_name() << RESET << std::endl;
	this->_weapon->attack();
	Enemy->takeDamage(this->_weapon->get_damage());
	if (Enemy->get_HP() <= 0)
		delete Enemy;
}


std::string 				Character::get_name() const{
	return (this->_name);
}

std::string 				Character::get_weaponname() const{
	return (this->_weapon->get_name());
}

int							Character::get_AP() const{
	return (this->_AP);
}

bool							Character::get_weapon() const{
	if (this->_weapon == NULL)
		return 0;
	return 1;
}

std::ostream &				operator<<(std::ostream & o, Character const & rhs )
{
	if (!rhs.get_weapon())
		o << MAGENTA << rhs.get_name() << " has " << rhs.get_AP() << " AP and is unarmed"  << RESET << std::endl;
	else
		o << MAGENTA << rhs.get_name() << " has " << rhs.get_AP() << " AP and carries a " << rhs.get_weaponname() << RESET << std::endl;
	return o;
}
