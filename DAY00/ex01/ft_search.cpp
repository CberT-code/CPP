/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:00:36 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/22 21:36:26 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

void				display_getter(std::string str)
{
	if (str.length() > 10){
		str.resize(9);
		str.push_back('.');
	}
	std::cout << WHITE << std::setw(10) << str << GREEN << '|' << RESET;
}

void				display(Contact contact)
{
	std::cout << GREEN << '|';
	display_getter(std::to_string(contact.get_id()));
	for(int j = 0; j < 2; ++j) {
		display_getter(contact.get_names(j));
	}
	display_getter(contact.get_names(3));
	std::cout << std::endl;
}

void				display_all(Contact contact)
{
	std::cout << GREEN << "index : " << WHITE << contact.get_id() << std::endl;
	std::cout << GREEN << "first name : " << WHITE << contact.get_names(0) << std::endl;
	std::cout << GREEN << "last name : " << WHITE << contact.get_names(1) << std::endl;
	std::cout << GREEN << "nickname : " << WHITE << contact.get_names(2) << std::endl;
	std::cout << GREEN << "login : " << WHITE << contact.get_names(3) << std::endl;
	std::cout << GREEN << "postal address : " << WHITE << contact.get_address() << std::endl;
	std::cout << GREEN << "email address : " << WHITE << contact.get_email() << std::endl;
	std::cout << GREEN << "phone number : " << WHITE << contact.get_phone() << std::endl;
	std::cout << GREEN << "birthday date : " << WHITE << contact.get_birthday() << std::endl;
	std::cout << GREEN << "favorite meal : " << WHITE << contact.get_extra(0) << std::endl;
	std::cout << GREEN << "underwear color : " << WHITE << contact.get_extra(1) << std::endl;
	std::cout << GREEN << "darkest secret : " << WHITE << contact.get_extra(2) << std::endl;
}

std::string			entry(std::string Name)
{
	std::string entrie;

	while (entrie.empty()){
		std::cout << GREEN << Name << std::endl << RESET;
		getline(std::cin, entrie);
	}
	return (entrie);
}

std::string			id_choose(std::string Name, int id_max)
{
	std::string entry;
	int			ret = 1;

	while (ret){
		std::cout << YELLOW << Name << std::endl << RESET;
		getline(std::cin, entry);
		if (!entry.empty()){
			ret = 0;
			for(unsigned i = 0; i < entry.length(); ++i) {
				if (!std::isdigit(entry.at(i)) || std::stoi(entry) > id_max) {
					ret = 1;
					std::cout << RED << "Wrong entry" << std::endl << RESET;
					break ;
				}
			}
		}
	}
	return (entry);
}

void		search_contact(Contact *contact)
{		
	int		id;
	int 	i;

	std::cout << GREEN << "|     index|first name| last name|     login|" << RESET << std::endl;
	if (reinterpret_cast<Contact*>(contact)[0].get_names(0).empty()){
	 	std::cout << RED << "NO CONTACT" << std::endl << RESET;
	}
	else{
		for(i = 0; i < 8 && !contact[i].get_names(0).empty(); ++i) {
			display(contact[i]);
		}
		id = std::stoi(id_choose("Choose an ID : " , i - 1));
		display_all(contact[id]);
	}
}
