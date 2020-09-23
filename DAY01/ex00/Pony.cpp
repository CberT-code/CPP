/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:01:24 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/23 14:52:36 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() {
	std::cout << "A new Pony is born" << std::endl;
}

Pony::~Pony() {
	std::cout << "A Pony was killed" << std::endl;
}

std::string				Pony::get_name(void) const {
	return (this->_name);
}

int						Pony::set_name(std::string value) {
	this->_name = value;
	return (1);
}

std::string				Pony::get_color(void) const {
	return (this->_color);
}

int						Pony::set_color(std::string value) {
	this->_color = value;
	return (1);
}

int						Pony::get_weight(void) const {
	return (this->_weight);
}

int						Pony::set_weight(int i) {
	this->_weight = i;
	return (1);
}
std::string				Pony::get_name_box(void) const {
	return (this->_name_box);
}

int						Pony::set_name_box(std::string value) {
	this->_name_box = value;
	return (1);
}
		
