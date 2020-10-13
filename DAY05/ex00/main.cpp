#include "Bureaucrat.hpp"


int main(void)
{
	try
	{
		std::cout << "Creation de bureaucrat Thomas : " << std::endl;
		Bureaucrat toto = Bureaucrat("thomas", 1);
		std::cout << toto << std::endl << std::endl;

		std::cout << "Creation d'une copy du bureaucrate : " << std::endl;
		Bureaucrat titi;
		titi.operator=(toto);
		std::cout << titi << std::endl;

		std::cout << "Creation d'une copy du bureaucrate : " << std::endl;
		Bureaucrat tata = Bureaucrat(toto);
		std::cout << tata << std::endl;


		std::cout << "test decrementation du grade." << std::endl;
		titi.dec_grade();
		std::cout << titi << std::endl;
		std::cout << "test incrementation du grade." << std::endl;
		titi.inc_grade();
		std::cout << titi << std::endl;
		// std::cout << "test incrementation du grade." << std::endl;  // Si decommenté, creer une erreur et stop le program
		// titi.inc_grade(); // Si decommenté, creer une erreur et stop le program

		std::cout << "Creation de bureaucrat Bobo : " << std::endl;
		Bureaucrat bobo = Bureaucrat("Boris", 150);
		std::cout << bobo << std::endl;

		std::cout << "test decrementation du grade." << std::endl;
		bobo.dec_grade();
	}
	catch (std::exception & e)
	{
		std::cerr << "error : " << e.what() << std::endl;
	}
	return 0;
}
