/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:10:58 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 11:42:00 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZombieEvent_H
#define ZombieEvent_H

#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(std::string);
		~ZombieEvent(void);
		
		void		set_ZombieType(std::string);
		Zombie 		*newZombie(std::string);

	private:
		std::string		_ZombieType;
};

#endif 
