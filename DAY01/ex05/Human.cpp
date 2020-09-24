#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

std::string			Human::identify() const{
		return this->_brain.identify();
}

const Brain			&Human::getBrain() const{
	return this->_brain;
}
	