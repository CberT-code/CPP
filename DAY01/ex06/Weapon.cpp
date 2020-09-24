#include "Weapon.hpp"

Weapon::Weapon(void) : type("HANDS") {}

Weapon::Weapon(std::string weapon) : type(weapon) {}

Weapon::~Weapon() {}

const std::string		&Weapon::getType(void) const{
	const std::string		&ref = this->type;
	return ref;
}

void					Weapon::setType(std::string value) {
	this->type = value;
}

