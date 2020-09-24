/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 16:04:39 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 20:16:26 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string, Weapon &weapon);
		~HumanA(void);

		void		attack(void);

	private:
		std::string		_name;
		Weapon			&_weapon;

};
#endif
