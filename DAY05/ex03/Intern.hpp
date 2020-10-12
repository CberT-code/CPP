
#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &);
		virtual ~Intern(void);
		Intern &				operator=( Intern const &);
		Form *					makeForm(std::string, std::string);

	private:
	 	Form *PresidentialPardonForm1(std::string);
        Form *RobotomyRequestForm1(std::string);
        Form *ShrubberyCreationForm1(std::string);
};

#endif
