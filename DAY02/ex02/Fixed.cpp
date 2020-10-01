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

Fixed::Fixed(void) : RawBits(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value){
	std::cout << "Default constructor called" << std::endl;
	this->RawBits = value << NbrBits;

}
Fixed::Fixed(float value){
	std::cout << "Default constructor called" << std::endl;
	this->RawBits = roundf(value * (1 << NbrBits));
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed &						Fixed::operator=( Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->RawBits = rhs.getRawBits();
	return (*this);
}

bool						Fixed::operator>( Fixed const & src) const {
	return (this->getRawBits() > src.getRawBits());
}

bool						Fixed::operator<( Fixed const & src) const {
	if (this->getRawBits() < src.getRawBits())
		return 1;
	return 0;
}

bool						Fixed::operator>=( Fixed const & src) const {
	if (this->getRawBits() >= src.getRawBits())
		return 1;
	return 0;
}

bool						Fixed::operator<=( Fixed const & src) const {
	if (this->getRawBits() <= src.getRawBits())
		return 1;
	return 0;
}

bool						Fixed::operator==( Fixed const & src) const {
	if (this->getRawBits() == src.getRawBits())
		return 1;
	return 0;
}

bool						Fixed::operator!=( Fixed const & src) const {
	if (this->getRawBits() != src.getRawBits())
		return 1;
	return 0;
}

Fixed						Fixed::operator+( Fixed const & src) const {
	Fixed ret;

	ret.setRawBits(this->toFloat() + src.toFloat());
	return (ret);
}

Fixed						Fixed::operator-( Fixed const & src) const {
	if (src.getRawBits() == 0)
		return Fixed(0);
	return (Fixed(this->toFloat() / src.toFloat()));
}

Fixed						Fixed::operator*( Fixed const & src) const {
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed						Fixed::operator/( Fixed const & src) const {
	Fixed ret;
	
	ret.setRawBits(this->toFloat() / src.toFloat());
	return (ret);
}

Fixed 						&Fixed::operator++(void) {
	this->RawBits += 1;
	return ( *this );
}

Fixed 						Fixed::operator++(int) {
	 Fixed obj(*this);
    this->RawBits += 1;
    return (obj);
}

Fixed 						&Fixed::operator--(void) {
	this->RawBits -= 1;
	return ( *this );
}

Fixed 						Fixed::operator--(int) {
	 Fixed obj(*this);
    this->RawBits -= 1;
    return (obj);
}

int							Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->RawBits);
}

void						Fixed::setRawBits(int const raw) {
	this->RawBits = raw;
}

float						Fixed::toFloat(void) const {
	return ( (float)(this->RawBits) / (1 << this->NbrBits) );
}

int							Fixed::toInt(void) const {
	return ( (int)(this->RawBits) >> this->NbrBits );
}


const Fixed 						&Fixed::min(Fixed const &src1, Fixed const &src2) {
	if (src1.toFloat() > src2.toFloat())
		return ((Fixed &)src2);
	return ((Fixed &)src1);
}

const Fixed 						&Fixed::max(Fixed const &src1, Fixed const &src2) {
	if (src1.toFloat() < src2.toFloat())
		return ((Fixed &)src2);
	return ((Fixed &)src1);
}

const Fixed 						&min( Fixed const & src1, Fixed const & src2) {
	if (src1.toFloat() > src2.toFloat())
		return (src2);
	return (src1);
}

const Fixed 						&max( Fixed const & src1, Fixed const & src2) {
	if (src1.toFloat() < src2.toFloat())
		return (src2);
	return (src1);
}

std::ostream				&operator<<(std::ostream & stream, Fixed const & obj){
	stream << obj.toFloat();
	return stream;
}
