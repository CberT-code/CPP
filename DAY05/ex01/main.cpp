#include "Bureaucrat.hpp"


int main(void)
{
    try
    {
        Bureaucrat Jacque("Jacque", 100);
        std::cout << Jacque << std::endl;
        Form permis("Permis", 140 , 3);
        Form visa("Visa", 10 , 10);
        std::cout << permis << std::endl;
        permis.beSigned(Jacque);
        permis.beSigned(Jacque);
        visa.beSigned(Jacque);

    }
    catch (std::exception & e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
    }

    return (0);
}