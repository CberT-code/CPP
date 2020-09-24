#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {}

Zombie::~Zombie() {}

void				Zombie::advert(void) {
	std::cout << "< " << this->_name << " (" 
	<< this->_type << ")> Braiiiiiiiiiiiiiiinnnnnnssssss ...\n";
}
	