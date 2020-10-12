#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main(void)
{
    try
    {
        Bureaucrat Jacque("Jacque", 1);
        std::cout << Jacque << std::endl;
        ShrubberyCreationForm maison("maison");
        RobotomyRequestForm roboto("roboto");
        PresidentialPardonForm pardon("pardon");
        std::cout << maison << std::endl;
        Jacque.signForm(&maison);
        maison.execute(Jacque);
        Jacque.signForm(&roboto);
		std::cout << "test execute Robotomy: " << std::endl << std::endl;
        roboto.execute(Jacque);
        roboto.execute(Jacque);
        roboto.execute(Jacque);
        roboto.execute(Jacque);
        roboto.execute(Jacque);
        roboto.execute(Jacque);
        Jacque.signForm(&pardon);
        pardon.execute(Jacque);
		Intern titi;
		std::cout << "test Presidential : " << std::endl << std::endl;
		Form *papa(titi.makeForm("Presidential Pardon", "toto"));
		papa->beSigned(&Jacque);
		papa->execute(Jacque);
		std::cout << "test Robotomy" << std::endl;
		papa = titi.makeForm("robotomy request", "toto");
		papa->beSigned(&Jacque);
		papa->execute(Jacque);
		std::cout << "test Shrubbery" << std::endl;
		papa = titi.makeForm("shrubbery Creation", "toto");
		papa->beSigned(&Jacque);
		papa->execute(Jacque);


    }
    catch (std::exception & e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
    }

    return (0);
}