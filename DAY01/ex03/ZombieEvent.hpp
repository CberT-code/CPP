/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:10:58 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 12:47:25 by cbertola         ###   ########.fr       */
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
		
		void			setZombieType(std::string);
		Zombie			*newZombie(std::string);
		Zombie			*randomChump(void);
		void			announce(std::string);

	private:
		std::string		_ZombieType;
		std::string		_name;
};

#endif 
