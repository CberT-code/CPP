/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annulaire.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:00:36 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/22 21:13:03 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

void		display_start(void)
{
	std::cout << GREEN << "*///////////////////////////////*" << std::endl;
	std::cout << "*//   Welcome to the annuary  //*" << std::endl;
	std::cout << "*///////////////////////////////*" << std::endl << RESET;
}

int			main(void)
{

	Contact			contact[8];
	std::string		cmd;

	display_start();
	while (cmd.compare("EXIT") != 0)
	{
		std::cout << YELLOW << "Tapez une commande : ADD / SEARCH / EXIT : " << std::endl << RESET;
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			add_contact(contact);
		else if (cmd.compare("SEARCH") == 0)
			search_contact(contact);
		else if (cmd.compare("EXIT") != 0)
			std::cout << "LA COMMANDE EST INCONNUE" << std::endl;
	}
	return 0;
}