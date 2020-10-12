/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/09 16:04:09 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("DEFAULT", 137, 145) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 137, 145) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) {
	ShrubberyCreationForm::operator=(src);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &					ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs) {
	if (this != &rhs)
	{

	}
	return (*this);
}

void									ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->get_sign() == 0 || executor.get_grade() > this->get_gradeExec())
	{
		if (this->get_sign() == 0)
			throw (ShrubberyCreationForm::NotSignedException());
		else
			throw (ShrubberyCreationForm::GradeTooLowException());
	}

	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		cpy;
	const char *	name;

	cpy = executor.get_name() + "_shrubbery";
	name = cpy.c_str();
	ifs.open("trees");
	if (ifs.fail())
		throw (ShrubberyCreationForm::CantOpenException());
	ofs.open(name);
	if (ofs.fail())
		throw (ShrubberyCreationForm::CantCreateException());
	while (getline(ifs, cpy))
		ofs << cpy << std::endl;
}

/************************
** EXCEPTIONS CantOpen **
************************/

ShrubberyCreationForm::CantOpenException::CantOpenException()
{}

ShrubberyCreationForm::CantOpenException::~CantOpenException() throw()
{}

ShrubberyCreationForm::CantOpenException::CantOpenException(const ShrubberyCreationForm::CantOpenException &rhs)
{
  *this = rhs;
}

ShrubberyCreationForm::CantOpenException& ShrubberyCreationForm::CantOpenException::operator=(const ShrubberyCreationForm::CantOpenException& rhs)
{
	(void)rhs;
 	return(*this);
}

char const        *ShrubberyCreationForm::CantOpenException::what(void) const throw()
{
  return("Can't open the file \"trees\".");
}

/**************************
** EXCEPTIONS CantCreate **
**************************/

ShrubberyCreationForm::CantCreateException::CantCreateException()
{}

ShrubberyCreationForm::CantCreateException::~CantCreateException() throw()
{}

ShrubberyCreationForm::CantCreateException::CantCreateException(const ShrubberyCreationForm::CantCreateException &rhs)
{
  *this = rhs;
}

ShrubberyCreationForm::CantCreateException& ShrubberyCreationForm::CantCreateException::operator=(const ShrubberyCreationForm::CantCreateException& rhs)
{
	(void)rhs;
 	return(*this);
}

char const        *ShrubberyCreationForm::CantCreateException::what(void) const throw()
{
  return("Can't create the file.");
}
