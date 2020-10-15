#include "Array.hpp"

int main()
{
    Array<char> arrayc(7);
    Array<int> arrayi(4);
    Array<int> testarrayi(arrayi);

	std::cout << "---------------------TEST CREATION EMPTY ARRAY---------------------" << std::endl;
	Array<int> emptytab;
    std::cout << "CHECK SIZE ARRAY : " << arrayc.size() << std::endl;
	std::cout << "-----------------TEST FILL ARRAY CHAR operator [] -----------------" << std::endl;
    try {
        for (unsigned int i = 0; i < arrayc.size(); i++)
           arrayc.operator[](i) = ('a' + i);
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

	std::cout << "-------------------CHECK ARRAY CHAR operator [] -------------------" << std::endl;
    try {
        for (unsigned int i = 0; i < arrayc.size(); i++)
         	 std::cout << arrayc.operator[](i) << std::endl;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

	std::cout << "------------------------TEST FILL ARRAY INT------------------------" << std::endl;
    try {
        for (unsigned int i = 0; i < arrayi.size(); i++)
            arrayi[i] = 0 + i;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

	std::cout << "------------TEST CHECK ARRAY INT AND OUT OF LIMIT------------------" << std::endl;
    try {
        for (unsigned int i = 0; i < 28; i++)
            std::cout << arrayi[i] << std::endl;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	
	std::cout << "------------------------TEST COPY ARRAY INT------------------------" << std::endl;
    Array<const int> constarrayint(arrayi);
    Array<const char> constarraychar(arrayc);
    Array<const int> constarrayintempty(emptytab);
	
	std::cout << "--------------------TEST CHECK COPY ARRAY INT----------------------" << std::endl;
    try {
        for (unsigned int i = 0; i < constarrayint.size(); i++)
            std::cout << constarrayint[i] << std::endl;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

	std::cout << "----------TEST CHECK DES CONST (A DECOMMENTER POUR TEST)-----------" << std::endl;
	//constarrayint[1] = 0;
	//constarraychar[1] = 'z';
}