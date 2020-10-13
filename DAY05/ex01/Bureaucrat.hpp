
#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class Form;

class Bureaucrat
{
    class GradeTooHighException : public std::exception
    {
        public:
            GradeTooHighException();
            GradeTooHighException(const GradeTooHighException &m);
            GradeTooHighException& operator=(const GradeTooHighException &m);
            virtual ~GradeTooHighException(void) throw();
            char const *what(void) const throw();
    };

	class GradeTooLowException : public std::exception
    {
        public:
            GradeTooLowException();
            GradeTooLowException(const GradeTooLowException &m);
            GradeTooLowException& operator=(const GradeTooLowException &m);
            virtual ~GradeTooLowException(void) throw();
            char const *what(void) const throw();
    };
	
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const, int);
		Bureaucrat(Bureaucrat const &);
		virtual ~Bureaucrat(void);
		Bureaucrat &				operator=( Bureaucrat const &);

		const std::string			get_name() const;
		int							get_grade() const;
		void						inc_grade();
		void						dec_grade();
		void						signForm(Form *);

	private:
		const std::string			_name;
		int							_grade;
};

std::ostream &				operator<<(std::ostream & o, Bureaucrat const &);

#include "Form.hpp"
#endif
