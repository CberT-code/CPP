/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/09 16:04:09 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

BureauCrat::BureauCrat(void) : _name("DEFAULT"){
	this->_grade = 150;
}

BureauCrat::BureauCrat(std::string name, int grade) : _name(name) {
	if (this->_grade < 1 || this->_grade > 150)
		// Exception
}

BureauCrat::BureauCrat(BureauCrat const & src) {
	BureauCrat::operator=(src);
}

BureauCrat::~BureauCrat() {}

BureauCrat &					BureauCrat::operator=( BureauCrat const & rhs){
	if (this != &rhs)
	{
		this->_grade = rhs.get_grade();
		this->_name = rhs.get_name();
	}
	return (*this);
}

std::string const				BureauCrat::get_name(void) const{
	return(this->_name);
}

int								BureauCrat::get_grade(void) const{
	return(this->_grade);
}

void							BureauCrat::inc_grade(void){
	if (this->_grade == 1)
		// Exception
	else
		this->_grade += 1;
}

void							BureauCrat::dec_grade(void){
	if (this->_grade == 150)
		//Exception
	else
	this->_grade -= 1;
}




std::ostream &				operator<<(std::ostream & o, BureauCrat const & rhs )
{
	return o;
}
