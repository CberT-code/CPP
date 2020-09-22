/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:00:36 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/22 21:24:20 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

Contact::Contact(void) {
	Contact::_idmax += 1;
	return ;
} 

Contact::~Contact(void) {
	Contact::_idmax -= 1;
	return ;
}

int				Contact::get_idmax(void) {
	return (Contact::_idmax);
}

int				Contact::get_id(void) const{
	return (Contact::_id);
}

int				Contact::set_id(int i) {
	this->_id = i;
	return 1;
}

std::string		Contact::get_names(int id) const{
	return (this->_names[id]);
}

int				Contact::set_names(int id, std::string value) {
	
	for( size_t i = 0; i < value.length(); ++i) {
		if (!std::isalnum(value.at(i))){
			std::cout << RED << "Only alphanumeric accepted" << std::endl;
			return 0;
		}
	}
	this->_names[id] = value;
	return 1;
}

std::string		Contact::get_address(void) const{
	return (this->_address);
}

int				Contact::set_address(std::string value) {
	this->_address = value;
	return 1;
}

std::string		Contact::get_email(void) const{
	return (this->_email);
}

int				Contact::set_email(std::string value) {
	if (value.find('@') > value.length() || value.find('.') > value.length() ||
	value.find_first_of('@') != value.find_last_of('@') ||
	value.find_last_of('.') < value.find_first_of('@')){
		std::cout << RED << "adresse email non valide" << RESET << std::endl;
		return 0;
	}
	this->_email = value;
	return 1;
}

std::string		Contact::get_phone(void) const{
	return (this->_phone);
}

int				Contact::set_phone(std::string value) {
	for( size_t i = 0; i < value.length(); ++i) {
		if (!std::isdigit(value.at(i)) || value.length() != 10 || value.at(0) != '0' ||
		(value.at(1) != '6' && value.at(1) != '7')){
			std::cout << RED << "Wrong Format" << std::endl;
			return 0;
		}
	}
	this->_phone = value;
	return 1;
}

std::string		Contact::get_birthday(void) const{
	return (this->_birthday);
}

int				Contact::set_birthday(std::string value) {
	this->_birthday = value;
	return 1;
}

std::string		Contact::get_extra(int id) const{
	
	return (this->_extra[id]);
}

int				Contact::set_extra(int id, std::string value) {
	this->_extra[id] = value;
	return 1;
}



int		Contact::_idmax = 0;