/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/09 16:04:09 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("FORM_DEFAULT"), _gradeExec(1), _gradeSign(1) {
	this->_sign = 0;
}

Form::Form(std::string name, int gs, int ge) : _name(name),
_gradeExec(ge),
_gradeSign(gs) {
	if (gs < 1 || gs > 150)
		gs < 1 ? throw (Form::GradeTooHighException()) : throw (Form::GradeTooLowException());
	if (ge < 1 || ge > 150)
		ge < 1 ? throw (Form::GradeTooHighException()) : throw (Form::GradeTooLowException());
	this->_sign = 0;
}

Form::Form(Form const & rhs) : _name(rhs._name),
_gradeExec(rhs._gradeExec),
_gradeSign(rhs._gradeSign)
{
	Form::operator=(rhs);
}

Form::~Form() {}

Form &					Form::operator=( Form const & rhs) {
	if (this != &rhs)
		this->_sign = rhs._sign;
	return (*this);
}

std::string					Form::get_name() const{
	return (this->_name);
}

int							Form::get_gradeSign() const{
	return (this->_gradeSign);
}

int							Form::get_gradeExec() const{
	return (this->_gradeExec);
}

bool						Form::get_sign() const{
	return (this->_sign);
}

void						Form::beSigned(Bureaucrat test){
	if (test.get_grade() > this->get_gradeSign()){
		test.signForm(*this);
		throw (Form::GradeTooLowException());
	}
	else{
		test.signForm(*this);
		if (this->get_sign() == 0)
			this->_sign = 1;
	}
}

std::ostream &				operator<<(std::ostream & o, Form const & rhs )
{
	o << "The form : " << rhs.get_name() << " can be sign by a grade " << rhs.get_gradeSign() 
	<< " and be execute by a grade " << rhs.get_gradeExec() << std::endl;
	return o;
}

/**********************
** EXCEPTIONS TooLow **
**********************/

Form::GradeTooLowException::GradeTooLowException(void)
{}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{}

Form::GradeTooLowException::GradeTooLowException(const Form::GradeTooLowException &src)
{
  Form::GradeTooLowException::operator=(src);
}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(const Form::GradeTooLowException& rhs)
{
	(void)rhs;
  return(*this);
}

char const        *Form::GradeTooLowException::what(void) const throw()
{
  return("Too Low");
}

/************************
** EXCEPTIONS TooHight **
************************/

Form::GradeTooHighException::GradeTooHighException()
{}

Form::GradeTooHighException::~GradeTooHighException() throw()
{}

Form::GradeTooHighException::GradeTooHighException(const Form::GradeTooHighException &rhs)
{
  *this = rhs;
}

Form::GradeTooHighException& Form::GradeTooHighException::operator=(const Form::GradeTooHighException& rhs)
{
	(void)rhs;
 	return(*this);
}

char const        *Form::GradeTooHighException::what(void) const throw()
{
  return("Too High");
}