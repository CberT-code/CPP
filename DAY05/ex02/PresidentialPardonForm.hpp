
#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(PresidentialPardonForm const &);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm &				operator=( PresidentialPardonForm const &);

		virtual void				execute (Bureaucrat const & executor) const;

	private:
};

#endif
