/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:24:44 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:24:45 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public virtual FragTrap,  public virtual NinjaTrap
{
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &);
		~SuperTrap(void);

		SuperTrap &				operator=( SuperTrap const &);
		void					rangedAttack(std::string const &);
		void					meleeAttack(std::string const &);
};

std::ostream &		operator<<(std::ostream & o, SuperTrap const &);

#endif
