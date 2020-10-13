/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:24:29 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:24:30 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
#define NINJATRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &);
		~NinjaTrap(void);

		NinjaTrap &				operator=( NinjaTrap const &);
		int						ninjaShoebox( ClapTrap &);
		int						ninjaShoebox( FragTrap &);
		int						ninjaShoebox( ScavTrap &);
		int						ninjaShoebox( NinjaTrap &);
};

std::ostream &		operator<<(std::ostream & o, NinjaTrap const &);

#endif
