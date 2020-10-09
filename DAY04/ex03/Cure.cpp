/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/07 17:42:44 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const & src) {
	Cure::operator=(src);
}

Cure::~Cure() {}

Cure &					Cure::operator=( Cure const & rhs) {
	if (this != &rhs)
	{
		AMateria::operator=(rhs);
	}
	return (*this);
}

AMateria*				Cure::clone() const {
	return (new Cure(*this));
}

