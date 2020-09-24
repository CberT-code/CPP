#include "Brain.hpp"

Brain::Brain(void) :
_weight(14),
_age(10),
_size(20),
_QI(100)
{}

Brain::Brain(int a, int b, int c, int d){
	this->_weight = a;
	this->_age = b;
	this->_size = c;
	this->_QI = d;
}

Brain::~Brain() {}

std::string			Brain::identify() const {
	const void		*ptr = this;
	std::stringstream	ss;
	ss << ptr;
	std::string			str = ss.str();
	return str;

}
	