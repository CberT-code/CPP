/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:10:58 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 14:32:57 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZombieHorde_H
#define ZombieHorde_H

#include "ZombieEvent.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int);
		~ZombieHorde(void);

		void			announce();

	private:
		Zombie			**_Zombie;
		int				_number;
};

#endif 
