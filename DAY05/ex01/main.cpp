#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
		std::cout << "Creation Bureaucrat :" << std::endl;
        Bureaucrat Jacque("Jacque", 100);
        std::cout << Jacque << std::endl;

		std::cout << "Creation Form Permis :" << std::endl;
        Form permis("Permis", 140 , 3);
        std::cout << permis << std::endl;

		std::cout << "Creation Form Permis2 :" << std::endl;
        Form permis2("Permis2", 140 , 3);
        std::cout << permis2 << std::endl;

		std::cout << "Creation Form Visa :" << std::endl;
        Form visa("Visa", 10 , 10);
        std::cout << visa << std::endl;


		std::cout << "Try to sign Permis par bureaucrate :" << std::endl;
		Jacque.signForm(&permis);
		std::cout << "Try to sign permis par Form :" << std::endl;
        permis.beSigned(&Jacque);
		std::cout << std::endl;

		std::cout << "Try to sign permis2 par Form :" << std::endl;
        permis2.beSigned(&Jacque);
		std::cout << "Try to sign Permis2 par bureaucrate :" << std::endl;
		Jacque.signForm(&permis2);
		std::cout << std::endl;

		std::cout << "Try to sign Visa par bureaucrate :" << std::endl;
		Jacque.signForm(&visa);
		std::cout << std::endl;

		std::cout << "Try to sign Visa par Form :" << std::endl;
        visa.beSigned(&Jacque);

    }
    catch (std::exception & e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
    }

    return (0);
}