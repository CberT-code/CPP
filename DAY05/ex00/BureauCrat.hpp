
#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class BureauCrat
{
    class GradeTooHighException : public std::exception
    {
        public:
            GradeTooHighException();
            GradeTooHighException(const GradeTooHighException &m);
            GradeTooHighException& operator=(const GradeTooHighException &m);
            ~GradeTooHighException(void) throw();
            char const *what(void) const throw();
    };

	class GradeTooLowException : public std::exception
    {
        public:
            GradeTooLowException();
            GradeTooLowException(const GradeTooLowException &m);
            GradeTooLowException& operator=(const GradeTooLowException &m);
            ~GradeTooLowException(void) throw();
            char const *what(void) const throw();
    };
	
	public:
		BureauCrat(void);
		BureauCrat(std::string const, int);
		BureauCrat(BureauCrat const &);
		virtual ~BureauCrat(void);
		BureauCrat &				operator=( BureauCrat const &);

		std::string const			get_name() const;
		int							get_grade() const;
		void						inc_grade();
		void						dec_grade();

	private:
		std::string	const			_name;
		int							_grade;
};

#endif
