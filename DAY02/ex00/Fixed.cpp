/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/27 10:46:33 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::NbrBits = 8;

Fixed::Fixed() : RawBits(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &		Fixed::operator=( Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->RawBits = rhs.getRawBits();

	return (*this);
}

int					Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (0);
}

void				Fixed::setRawBits(int const raw) {
	this->RawBits = raw;
}

