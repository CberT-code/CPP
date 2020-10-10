
#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Form
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
		Form(void);
		Form(std::string, int const, int const);
		Form(Form const &);
		virtual ~Form(void);
		Form &				operator=( Form const &);

		std::string			get_name() const;
		int					get_gradeSign() const;
		int					get_gradeExec() const;
		bool				get_sign() const;
		void				beSigned(Bureaucrat);

	private:
		std::string	const		_name;
		int	const				_gradeExec;
		int	const				_gradeSign;
		bool					_sign;


};

std::ostream &					operator<<(std::ostream & o, Form const &);

#endif
