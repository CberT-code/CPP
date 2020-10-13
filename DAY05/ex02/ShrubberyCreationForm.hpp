
#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm &				operator=( ShrubberyCreationForm const &);

		virtual void				execute (Bureaucrat const & executor) const;

	 class CantOpenException : public std::exception
    {
        public:
            CantOpenException();
            CantOpenException(const CantOpenException &m);
            CantOpenException& operator=(const CantOpenException &m);
            virtual ~CantOpenException(void) throw();
            char const *what(void) const throw();
    };
	class CantCreateException : public std::exception
    {
        public:
            CantCreateException();
            CantCreateException(const CantCreateException &m);
            CantCreateException& operator=(const CantCreateException &m);
            virtual ~CantCreateException(void) throw();
            char const *what(void) const throw();
    };


	private:
};

#endif
