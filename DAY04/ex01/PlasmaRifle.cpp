/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:16:55 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) :
AWeapon(name, apcost, damage) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) {
	PlasmaRifle::operator=(src);
}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle &			PlasmaRifle::operator=( PlasmaRifle const & rhs) {
	if (this != & rhs)
		AWeapon::operator=(rhs);
	return (*this);
}

void 					PlasmaRifle::attack(void) const {
	std::cout <<  "* piouuu piouuu piouuu *" << std::endl;
}

std::ostream &			operator<<(std::ostream & o, PlasmaRifle const & rhs )
{
	o << rhs.get_name() << std::endl;
	return o;
}
