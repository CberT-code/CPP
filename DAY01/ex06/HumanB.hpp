/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:35:40 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 20:38:11 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(void);
		HumanB(std::string);
		~HumanB(void);

		void		attack(void);
		void		setWeapon(Weapon &weapon);
		
	private:
		std::string		_name;
		Weapon			*_weapon;
};
#endif
