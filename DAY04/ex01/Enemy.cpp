/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:16:55 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {
	this->_HP = 100;
	this->_type = "Defautl";
}

Enemy::Enemy(int hp, std::string const & type) {
	this->_HP = hp;
	this->_type = type;
}

Enemy::Enemy(Enemy const & src) {
	Enemy::operator=(src);
}

Enemy::~Enemy() {
	this->_HP = -1;
}

Enemy &			Enemy::operator=( Enemy const & rhs) {
	if (this != & rhs){
		this->_HP = rhs._HP;
		this->_type = rhs._type;
	}
	return (*this);
}

std::string			Enemy::get_type(void) const{
	return (this->_type);
}

int					Enemy::get_HP(void) const{
	return (this->_HP);
}

void		 		Enemy::takeDamage(int damage){
	if (damage < 0)
		return ;
	if (this->_HP - damage < 0)
		this->_HP = 0;
	else
		this->_HP -= damage;
	return ;
}

std::ostream &		operator<<(std::ostream & o, Enemy const & rhs )
{
	o << rhs.get_type() << std::endl;
	return o;
}
