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

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("DEFAULT"){
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1 || grade > 150)
	{
		if (this->_grade < 1)
			throw(Bureaucrat::GradeTooHighException());
		if (this->_grade < 150)
			throw(Bureaucrat::GradeTooLowException());
	}
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name)  {
	Bureaucrat::operator=(src);
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &					Bureaucrat::operator=( Bureaucrat const & rhs){
	this->_grade = rhs.get_grade();
	return (*this);
}

std::string const				Bureaucrat::get_name(void) const{
	return(this->_name);
}

int								Bureaucrat::get_grade(void) const{
	return(this->_grade);
}

void							Bureaucrat::inc_grade(void){
	if (this->_grade == 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->_grade -= 1;
}

void							Bureaucrat::dec_grade(void){
	if (this->_grade == 150)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->_grade += 1;
}


/**********************
** EXCEPTIONS TooLow **
**********************/

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException(const Bureaucrat::GradeTooLowException &src)
{
  Bureaucrat::GradeTooLowException::operator=(src);
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(const Bureaucrat::GradeTooLowException& rhs)
{
	(void)rhs;
  return(*this);
}

char const        *Bureaucrat::GradeTooLowException::what(void) const throw()
{
  return("Too Low");
}

/************************
** EXCEPTIONS TooHight **
************************/

Bureaucrat::GradeTooHighException::GradeTooHighException()
{}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{}

Bureaucrat::GradeTooHighException::GradeTooHighException(const Bureaucrat::GradeTooHighException &rhs)
{
  *this = rhs;
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(const Bureaucrat::GradeTooHighException& rhs)
{
	(void)rhs;
 	return(*this);
}

char const        *Bureaucrat::GradeTooHighException::what(void) const throw()
{
  return("Too High");
}

std::ostream &			operator<<(std::ostream & o, Bureaucrat const & rhs )
{
	o << rhs.get_name() << ", bureaucrat grade " << rhs.get_grade() << "." << std::endl;
	return o;
}