/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:24:35 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:24:37 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &);
		~ScavTrap(void);

		ScavTrap &				operator=( ScavTrap const &);
		int						ChallengeNewComer(std::string const &);
};

std::ostream &		operator<<(std::ostream & o, ScavTrap const &);

#endif
