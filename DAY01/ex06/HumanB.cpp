#include "HumanB.hpp"

HumanB::HumanB(void) :
_name("DEFAULT"),
_weapon(NULL)
{}

HumanB::HumanB(std::string name) :
_name(name),
_weapon(NULL)
{}

HumanB::~HumanB() {}

void				HumanB::attack(void) {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void				HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}