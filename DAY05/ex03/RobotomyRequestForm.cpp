/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/09 16:04:09 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("DEFAULT", 45, 72) {}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 45, 71) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) {
	RobotomyRequestForm::operator=(src);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &					RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs) {
	if (this != &rhs)
	{
		
	}
	return (*this);
}

void									RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->get_sign() == 0 || executor.get_grade() > this->get_gradeExec())
	{
		if (this->get_sign() == 0)
			throw (RobotomyRequestForm::NotSignedException());
		else
			throw (RobotomyRequestForm::GradeTooLowException());
	}
	int i;
	
	i = rand() % 5;
	if (i == 1)
	{
		std::cout << "bzzzztttt brrrrrkkkrrrrr tsuuuut tsssutttt" << std::endl;
		std::cout << executor.get_name() << " has been robotized" << std::endl;
	}
	else
		std::cout << "Robotize not successfull" << std::endl;
	

}
