#include "Zombie.hpp"

Zombie::Zombie(void) : 
_name("DEFAULT"),
_type("DEFAULT")
{
	this->_weapon = "his hands";
	this->advert();
}

Zombie::Zombie(std::string name, std::string type) :
_name(name),
_type(type)
{
	this->advert();
}

Zombie::~Zombie() {
	std::cout << YELLOW << "The zombie " << this->_name << " has been killed\n" << RESET;
}

void				Zombie::advert(void) {
	std::cout << RED << "< " << this->_name << " (" 
	<< this->_type << ")> Braiiiiiiiiiiiiiiinnnnnnssssss ...\n\n" << RESET;
}

void				Zombie::set_weapon(std::string weapon){
	this->_weapon = weapon;
	std::cout << "The zombie " << this->_name << " get a new weapon : " << weapon << std::endl;
}

std::string			Zombie::get_weapon(void){
	return (this->_weapon);
}
	