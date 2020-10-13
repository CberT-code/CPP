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

#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include "Header.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpiont") {
	std::cout << BLUE << "* click click click *" << RESET << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src) {
	RadScorpion::operator=(src);
}

RadScorpion::~RadScorpion() {
	std::cout << RED << "* SPROTCH *" << RESET << std::endl;
}

RadScorpion &			RadScorpion::operator=( RadScorpion const & rhs) {
	if (this != & rhs)
		Enemy::operator=(rhs);
	return (*this);
}

std::ostream &			operator<<(std::ostream & o, RadScorpion const & rhs )
{
	o << rhs.get_type() << std::endl;
	return o;
}
