/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Foo.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/09 16:04:09 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Foo.hpp"

Foo::Foo() {
	this->_str = NULL;
	this->_dbl = 0;
}

Foo::Foo(char *str) {
	int pt = 0;
	this->_str = str;
	this->_dbl = atof(this->_str);
	if (this->_dbl == -0)
		this->_dbl = 0;
	if (this->_dbl == 0 && strlen(str) == 1 && str[0] != '0')
		this->_dbl = str[0];
	if (this->_dbl != INFINITY && this->_dbl != -INFINITY && !std::isnan(this->_dbl)){
		for (size_t i = 0; i < strlen(str); i++)
		{
			if (i == 0 && (str[i] == '-' || str[i] == '+'))
				i++;
			if (i != strlen(str) - 1 && isdigit(str[i]) == 0 && str[i] != '.')
				throw (Foo::NotValidException());
			if (str[i] == '.')
				pt += 1;
			if (pt > 1 || (i == strlen(str) - 1 && str[i] != '.' && str[i] != 'f' && isdigit(str[i]) == 0))
				throw (Foo::NotValidException());
		}
	}
		
}

Foo::Foo(Foo const & src) {
	Foo::operator=(src);
}

Foo &					Foo::operator=( Foo const & rhs) {
	if (this != &rhs)
	{
		this->_str = rhs._str;
		this->_dbl = rhs._dbl;
	}
	return (*this);
}

Foo::~Foo() {}

double				Foo::get_dbl(){
	return (this->_dbl);
}

Foo::operator char(){
	return (static_cast<char>(this->_dbl));
}

Foo::operator int(){
	return (static_cast<int>(this->_dbl));
}

Foo::operator float(){
	return (static_cast<float>(this->_dbl));
}

Foo::operator double(){
	return (this->_dbl);
}

void					Foo::check_char(){
	char c;

	if (std::isnan(this->_dbl) ||  this->_dbl > static_cast<double>(CHAR_MAX) ||
	this->_dbl < static_cast<double>(CHAR_MIN) || floor(this->_dbl) != this->_dbl)
		std::cout << "char : " << "impossible" << std::endl;
	else {
		if (!std::isprint(static_cast<char>(this->_dbl)))
			std::cout << "char : " << "Non displayable" << std::endl;
		else
			std::cout << "char : '" << (c = Foo(this->_str)) << "'" << std::endl;
	}
}

void					Foo::check_int(){
	if (std::isnan(this->_dbl) || this->_dbl > static_cast<double>(INT_MAX) || this->_dbl < static_cast<double>(INT_MIN))
		std::cout << "int : " << "impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(this->_dbl) << std::endl;
}

void					Foo::check_float(){

	if (std::isnan(this->_dbl))
		std::cout << "float : nanf" << std::endl;
	else if (this->_dbl == INFINITY)
		std::cout << "float : " << "inff" << std::endl;
	else if (this->_dbl == -INFINITY)
		std::cout << "float : " << "-inff" << std::endl;
	else if (this->_dbl > static_cast<double>(FLT_MAX) || this->_dbl < static_cast<double>(-FLT_MAX))
		std::cout << "float : " << "impossible" << std::endl;
	else if (floor(this->_dbl) != this->_dbl)
		std::cout << "float : " << this->_dbl << "f" << std::endl;
	else
		std::cout << "float : " << static_cast<float>(this->_dbl) << ".0f" << std::endl;
}

void					Foo::check_double(){
	if (std::isnan(this->_dbl))
		std::cout << "double : nan" << std::endl;
	else if (this->_dbl == INFINITY)
		std::cout << "double : " << "inf" << std::endl;
	else if (this->_dbl == -INFINITY)
		std::cout << "double : " << "-inf" << std::endl;
	else if (this->_dbl > static_cast<double>(DBL_MAX) || this->_dbl < static_cast<double>(-DBL_MAX))
		std::cout << "double : " << "impossible" << std::endl;
	else if (floor(this->_dbl) != this->_dbl)
		std::cout << "double : " << this->_dbl << std::endl;
	else
		std::cout << "double : " << this->_dbl << ".0" << std::endl;
}



/**********************
** EXCEPTIONS Foo	 **
**********************/

Foo::NotValidException::NotValidException(void)
{}

Foo::NotValidException::~NotValidException(void) throw()
{}

Foo::NotValidException::NotValidException(const Foo::NotValidException &src)
{
  Foo::NotValidException::operator=(src);
}

Foo::NotValidException& Foo::NotValidException::operator=(const Foo::NotValidException& rhs)
{
	(void)rhs;
  return(*this);
}

char const        *Foo::NotValidException::what(void) const throw()
{
  return("Not valid argument");
}