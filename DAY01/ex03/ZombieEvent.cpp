#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type) :
_ZombieType(type)
{}

ZombieEvent::~ZombieEvent() {}

void			ZombieEvent::setZombieType(std::string type) {
	this->_ZombieType = type;
}

Zombie 			*ZombieEvent::newZombie(std::string name) {
	return(new Zombie(name, this->_ZombieType));
}

Zombie 			*ZombieEvent::randomChump(void) {
	int				i;
	std::string		name;

	i = std::rand() % 100;
	name = ("Zombie_CB" + std::to_string(i));
	this->announce(name);
	return (this->newZombie(name));

}

void			ZombieEvent::announce(std::string name) {
	std::cout << YELLOW << "\"BROOOOOOAAAAARGGGGGG...\" The zombie " 
	<< name << " just arrived\n" << RESET;
}