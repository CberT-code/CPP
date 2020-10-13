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
		std::cout << "test Presidential : " << std::endl << std::endl;
		Form *papa(titi.makeForm("Presidential Pardon", "toto"));
		papa->beSigned(&Jacques);
		Jacques.executeForm(*papa);


    }
    catch (std::exception & e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
    }

    return (0);
}