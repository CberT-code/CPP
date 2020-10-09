/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/07 17:42:44 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource() {
	this->_nbMateria = 0;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	MateriaSource::operator=(src);
}

MateriaSource::~MateriaSource() {
	suppr_materia2(this->_inventory);
}

MateriaSource &					MateriaSource::operator=( MateriaSource const & rhs) {
	if (this != &rhs)
	{
		suppr_materia2(this->_inventory);
		for (int i = 0; i < 4; i++)
		{
			if (rhs._inventory[i] != 0)
				this->_inventory[i] = rhs._inventory[i]->clone();
		}
		this->_nbMateria = rhs._nbMateria;
	}
	return (*this);
}

void 							MateriaSource::learnMateria(AMateria* src){
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == 0){
			this->_inventory[i] = src;
			this->_nbMateria += 1;
			break ;
		}
	}
}

AMateria* 						MateriaSource::createMateria(std::string const & type){
	if (this->_inventory[0] == 0)
		return (NULL);

	for (int i = 3; i >= 0; i--){
		if (this->_inventory[i] != 0)
			if (this->_inventory[i]->get_type() == type)
				return (this->_inventory[i]->clone());
	}
	return (0);
}

void							suppr_materia2(AMateria **inventory)
{
	for (int i = 0; i < 4; i++){
		delete inventory[i];
		inventory[i] = 0;
	}
}