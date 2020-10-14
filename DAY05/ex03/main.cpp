#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main(void)
{
    try
    {
		Bureaucrat Jacques = Bureaucrat("Jacques", 1);
		Intern titi;

		Form *President(titi.makeForm("Presidential Pardon", "President"));
		Jacques.signForm(President);
		Jacques.executeForm(*President);
		std::cout << std::endl;

		Form *Robotomy(titi.makeForm("robotomy request", "Robotomy"));
		Jacques.signForm(Robotomy);
		Jacques.executeForm(*Robotomy);
		std::cout << std::endl;

		Form *Shrubbery(titi.makeForm("Shrubbery creation", "Shrubbery"));
		Jacques.signForm(Shrubbery);
		Jacques.executeForm(*Shrubbery);


    }
    catch (std::exception & e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
    }

    return (0);
}