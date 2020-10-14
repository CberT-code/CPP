#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(void)
{
    try
    {
		std::cout << "Creation de Bureaucrat Jacque" << std::endl;
        Bureaucrat Jacque("Jacque", 1);
        std::cout << Jacque << std::endl;

		std::cout << "Creation de : ShrubberyCreationForm" << std::endl;
        ShrubberyCreationForm maison("maison");
        std::cout << maison << std::endl;

		std::cout << "Creation de : RobotomyRequestForm" << std::endl;
        RobotomyRequestForm roboto("roboto");
        std::cout << roboto << std::endl;

		std::cout << "Creation de : PresidentialPardonForm" << std::endl;
        PresidentialPardonForm pardon("pardon");
        std::cout << pardon << std::endl << std::endl;

		std::cout << "Jacque sign Form ShrubberyCreationForm :" << std::endl;
        Jacque.signForm(&maison);
		std::cout << std::endl;
		std::cout << "Jacque execute Form ShrubberyCreationForm :" << std::endl;
        maison.execute(Jacque);
		std::cout << std::endl;
		std::cout << "Jacque sign Form RobotomyRequestForm :" << std::endl;
        Jacque.signForm(&roboto);
		std::cout << std::endl;


		std::cout << "Jacque execute 6 times Form RobotomyRequestForm :" << std::endl;
        roboto.execute(Jacque);
        roboto.execute(Jacque);
        roboto.execute(Jacque);
        roboto.execute(Jacque);
        roboto.execute(Jacque);
        roboto.execute(Jacque);
		std::cout << std::endl;

		std::cout << "Jacque sign Form PresidentialPardonForm :" << std::endl;
        Jacque.signForm(&pardon);
		std::cout << std::endl;
		std::cout << "Jacque execute Execute PresidentialPardonForm :" << std::endl;
        pardon.execute(Jacque);
		std::cout << std::endl;

		std::cout << "Creation de Bureaucrat Pauline" << std::endl;
        Bureaucrat Pauline("Pauline", 150);
        std::cout << Pauline << std::endl;

		std::cout << "Creation de : for maison2" << std::endl;
        ShrubberyCreationForm maison2("maison2");
        std::cout << maison2 << std::endl;

		std::cout << "Pauline sign naison :" << std::endl;
		Pauline.signForm(&maison2);
		std::cout << std::endl;

		std::cout << "Pauline execute Execute PresidentialPardonForm Already signed by Jacques :" << std::endl;
       	maison.execute(Pauline);

    }
    catch (std::exception & e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
    }

    return (0);
}