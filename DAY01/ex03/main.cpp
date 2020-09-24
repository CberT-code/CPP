/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:10:49 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 14:36:00 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp" 

int			main(void)
{
	ZombieHorde 	Horde = ZombieHorde(4);

	std::cout << "THEY RUN AFTER UUUUUUSSSSS!!!!! RRRRUUUUUUUUUNNNNNNNNN!!!!!!\n\n";
	Horde.announce();
	return (0);
}