/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/09 16:04:09 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("DEFAULT", 5, 25) {}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 5, 25) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) {
	PresidentialPardonForm::operator=(src);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &					PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs) {
	if (this != &rhs)
	{
		
	}
	return (*this);
}

void										PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->get_sign() == 0 || executor.get_grade() > this->get_gradeExec())
	{
		if (this->get_sign() == 0)
			throw (PresidentialPardonForm::IsNotSignedException());
		else
			throw (PresidentialPardonForm::GradeTooLowException());
	}
	std::cout << executor.get_name() << " has been forgiven by Zafod Beeblebrox." << std::endl;
	
}
