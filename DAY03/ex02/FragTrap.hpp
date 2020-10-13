/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:22:38 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:22:41 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &);
		~FragTrap(void);

		FragTrap &				operator=( FragTrap const &);
		int						vaulthunter_dot_exe(std::string const & target);
};

std::ostream &		operator<<(std::ostream & o, FragTrap const &);

#endif
