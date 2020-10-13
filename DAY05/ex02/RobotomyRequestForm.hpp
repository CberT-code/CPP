
#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string);
		RobotomyRequestForm(RobotomyRequestForm const &);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm &				operator=( RobotomyRequestForm const &);

		virtual void				execute (Bureaucrat const & executor) const;

	private:
};

#endif
