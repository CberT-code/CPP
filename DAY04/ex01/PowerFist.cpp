/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 12:07:32 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/10 09:31:34 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "AWeapon.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(std::string const & name, int apcost, int damage) :
AWeapon(name, apcost, damage){}

PowerFist::PowerFist(PowerFist const & src) {
	PowerFist::operator=(src);
}

PowerFist::~PowerFist() {}

PowerFist &			PowerFist::operator=( PowerFist const & rhs) {
	if (this != & rhs)
		AWeapon::operator=(rhs);
	return (*this);
}

void 				PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}

std::ostream &		operator<<(std::ostream & o, PowerFist const & rhs )
{
	o << rhs.get_name() << std::endl;
	return o;
}
