#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	ZombieEvent		zombie("HORDE");

	this->_number = n;
	this->_Zombie = new Zombie*[n];
	for(int i = 0; i < n; ++i) {
		this->_Zombie[i] = zombie.randomChump();
	}
}

ZombieHorde::~ZombieHorde() {
	
	for(int i = 0; i < this->_number; ++i) {
		delete this->_Zombie[i];
	}
	delete [] this->_Zombie;
}

void				ZombieHorde::announce() {
	
	for(int i = 0; i < this->_number; ++i) {
		this->_Zombie[i]->advert();
	}
}
	