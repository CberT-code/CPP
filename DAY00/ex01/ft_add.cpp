/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:00:36 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/22 21:12:02 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

void				add_contact(Contact *contact)
{
	std::string		aff[11];
	int				id;
	int				i;

	aff[0] = "First Name : ";
	aff[1] = "Last Name : ";
	aff[2] = "Nickname : ";
	aff[3] = "Login : ";
	aff[4] = "Postal Adress: ";
	aff[5] = "Email Address : ";
	aff[6] = "Phone Number : (06XXXXXXXX) - (07XXXXXXXX)";
	aff[7] = "Birthday Date : ";
	aff[8] = "Favorite Meal : ";
	aff[9] = "Underwear Color : ";
	aff[10] = "Darkest Secret : ";
	for(id = 0; id < 8 && !contact[id].get_names(0).empty(); ++id) {
		if (contact[id].get_names(0).empty())
			break ;
	}
	if (id < 8){
		contact[id].set_id(id);
		for(i = 0; i < 4; ++i){
			while (!contact[id].set_names(i, entry(aff[i])));
		}
		while (!contact[id].set_address(entry(aff[i])));
		i++;
		while (!contact[id].set_email(entry(aff[i])));
		i++;
		while (!contact[id].set_phone(entry(aff[i])));
		i++;
		while (!contact[id].set_birthday(entry(aff[i])));
		i++;
		for(unsigned j = 0; j < 3; ++j){
			while (!contact[id].set_extra(j, entry(aff[i])));
			i++;
		}
		std::cout << YELLOW << "UTILISATEUR ENREGISTRE" << std::endl;
	}
	else
		std::cout << RED << "MEMOIRE PLEINE" << std::endl;
}
