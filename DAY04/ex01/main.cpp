
#include "PlasmaRifle.hpp"
#include "Header.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main() {
	Character* Cyrille = new Character("Cyrille");
	std::cout << *Cyrille;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle(); 
	AWeapon* pf = new PowerFist();
	Cyrille->equip(pr); std::cout << *Cyrille;
	Cyrille->equip(pf);
	Cyrille->attack(b);
	std::cout << *Cyrille;
	Cyrille->equip(pr);
	std::cout << *Cyrille;
	std::cout << GREEN << "PV Enemy : " << b->get_HP() << RESET << std::endl;
	Cyrille->attack(b);
	std::cout << GREEN << "PV Enemy : " << b->get_HP() << RESET << std::endl;
	std::cout << *Cyrille;
	Cyrille->attack(b);
	SuperMutant* c = new SuperMutant();
	Cyrille->equip(pf);
	std::cout << *Cyrille;
	Cyrille->attack(c);
	Cyrille->attack(c);
	Cyrille->attack(c);
	std::cout << *Cyrille;
	Cyrille->recoverAP();
	Cyrille->recoverAP();
	Cyrille->recoverAP();
	Cyrille->recoverAP();
	std::cout << *Cyrille;
	Cyrille->attack(c);
	Cyrille->attack(c);
	return 0;
}