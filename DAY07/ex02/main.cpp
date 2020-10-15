#include "Array.hpp"

int main()
{
    Array<char> arrayc(7);
    Array<int> arrayi(4);
    Array<int> testarrayi(arrayi);

	std::cout << "------------------------TEST FILL ARRAY CHAR------------------------" << std::endl;
    std::cout << "CHECK SIZE : " << arrayc.size() << std::endl;
    try {
        for (unsigned int i = 0; i < arrayc.size(); i++)
            arrayc[i] = ('a' + i);
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

	std::cout << "------------------------CHECK ARRAY CHAR------------------------" << std::endl;
    try {
        for (unsigned int i = 0; i < arrayc.size(); i++)
            std::cout << arrayc[i] << std::endl;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

	std::cout << "------------------------TEST FILL ARRAY INT------------------------" << std::endl;
    try {
        for (unsigned int i = 0; i < arrayc.size(); i++)
            arrayi[i] = 0 + i;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }



	std::cout << "------------------------TEST COPY ARRAY INT------------------------" << std::endl;
    Array<int> testarrayiII = arrayi;
	std::cout << "------------------------TEST CHECK ARRAY INT------------------------" << std::endl;
    try {
        for (unsigned int i = 0; i < 28; i++)
            std::cout << arrayi[i] << std::endl;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	
	std::cout << "------------------------TEST CHECK COPY ARRAY INT------------------------" << std::endl;
    try {
        for (unsigned int i = 0; i < 28; i++)
            std::cout << testarrayiII[i] << std::endl;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}