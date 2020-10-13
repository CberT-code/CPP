/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:16:55 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "Enemy.hpp"
#include "Header.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	std::cout << BLUE << "Gaaah. Break everything !" << RESET << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) {
	SuperMutant::operator=(src);
}

SuperMutant::~SuperMutant() {
	std::cout << RED << "Aaargh ..." << RESET << std::endl;
}

SuperMutant &			SuperMutant::operator=( SuperMutant const & rhs) {
	if (this != & rhs)
		Enemy::operator=(rhs);
	return (*this);
}

void		 			SuperMutant::takeDamage(int damage){
	Enemy::takeDamage(damage - 3);
}

std::ostream &			operator<<(std::ostream & o, SuperMutant const & rhs )
{
	o << rhs.get_type() << std::endl;
	return o;
}
