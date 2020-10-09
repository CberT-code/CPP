
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Header.hpp"

int main() {

	IMateriaSource* src = new MateriaSource();

	std::cout << YELLOW << "test Equipement de 4 materia a la source" << RESET << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	std::cout << YELLOW << "test : Ajout d'une 5 materia a la source" << RESET << std::endl;
	src->learnMateria(new Cure()); // creer un leek car non utilise

	ICharacter* Mage = new Character("Mage");
	ICharacter* Sauron = new Character("Sauron");
	AMateria* tmp;
	AMateria* tmp2;

	std::cout << YELLOW << "test use un emplacement de Materia non initialise" << RESET << std::endl;
	Mage->use(2, *Sauron);


	std::cout << YELLOW << "test Equipement de 4 materia au personnage" << RESET << std::endl;
	tmp2 = src->createMateria("ice");
	std::cout << BLUE << "test XP materia 0 = " << 	tmp2->get_XP() << RESET << std::endl;
	Mage->equip(tmp2);
	tmp = src->createMateria("cure");
	Mage->equip(tmp);
	tmp = src->createMateria("cure");
	Mage->equip(tmp);
	std::cout << YELLOW << "test : Equiper une materia deja existante dans l'equipement" << RESET << std::endl;
	Mage->equip(tmp);
	tmp = src->createMateria("cure");
	Mage->equip(tmp);
	std::cout << YELLOW << "test : Creer une materia avec un type inexistant" << RESET << std::endl;
	tmp = src->createMateria("Pelo");
	Mage->equip(tmp);
	std::cout << YELLOW << "test : Equiper une 5eme Materia au personnage" << RESET << std::endl;
	tmp = src->createMateria("cure"); // creer un leek car new et non utilisé
	Mage->equip(tmp);


	std::cout << YELLOW << "affichage du nom" << RESET << std::endl;
	std::cout << Mage->getName() << std::endl;
	std::cout << YELLOW << "test des 4 Materia avec use" << RESET << std::endl;
	
	Mage->use(0, *Sauron);
	std::cout << BLUE << "test XP materia 0 = " << 	tmp2->get_XP() << RESET << std::endl;
	tmp2->get_XP();
	Mage->use(1, *Sauron);
	Mage->use(2, *Sauron);
	Mage->use(3, *Sauron);
	std::cout << YELLOW << "test use Materia non attribuée positive" << std::endl;
	Mage->use(4, *Sauron);
	std::cout << "test use Materia non attribuée negative" << RESET << std::endl;
	Mage->use(-5, *Sauron);

	std::cout << YELLOW << "Unequip Materia 0" << RESET << std::endl;
	Mage->unequip(0);
	std::cout << YELLOW << "Use Materia 0" << RESET << std::endl;
	Mage->use(0, *Sauron);
	std::cout << YELLOW << "Unequip Materia 5" << RESET << std::endl;
	Mage->unequip(5);
	std::cout << YELLOW << "Unequip all Materia" << RESET << std::endl;
	Mage->unequip(4);
	Mage->unequip(3);
	Mage->unequip(2);
	Mage->unequip(1);
	std::cout << YELLOW << "Unequip Materia deja unequip" << RESET << std::endl;
	Mage->unequip(1);


	delete Sauron;
	delete Mage;
	delete src;
	return 0; 
}