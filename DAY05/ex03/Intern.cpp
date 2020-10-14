/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:09:23 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/14 09:20:54 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & src) {
	Intern::operator=(src);
}

Intern::~Intern() {}

Intern &					Intern::operator=( Intern const & rhs) {
	if (this != &rhs)
	{

	}
	return (*this);
}

Form *						Intern::makeForm(std::string name, std::string str2){
	std::string 	str[3] = {"PRESIDENTIAL PARDON", "ROBOTOMY REQUEST", "SHRUBBERY CREATION"};
	Form *			(Intern::*forms[3])(std::string target) = {&Intern::PresidentialPardonForm1, &Intern::RobotomyRequestForm1, &Intern::ShrubberyCreationForm1};
	std::string		str1 = name;
	// Form			*forms[3]= {&PresidentialPardonForm(str2), &RobotomyRequestForm(str2), &ShrubberyCreationForm(str2)};

	for (unsigned long j = 0; j < str1.length(); ++j) {
		str1.at(j) = std::toupper(str1.at(j));
	}
	for (int i = 0; i < 3; i++)
	{
		if (str[i] == str1){
			std::cout << "Intern creates " << str1 << std::endl;
			return ((this->*forms[i])(str2));
		}
	}
	std::cout << "No form match with the name " << name << std::endl;
	return (NULL);
}

Form *						Intern::PresidentialPardonForm1(std::string name){
	return (new PresidentialPardonForm(name));
}

Form *						Intern::RobotomyRequestForm1(std::string name){
	return (new RobotomyRequestForm(name));
}

Form *						Intern::ShrubberyCreationForm1(std::string name){
	return (new ShrubberyCreationForm(name));
}

