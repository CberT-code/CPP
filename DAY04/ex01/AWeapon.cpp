#include "AWeapon.hpp"


AWeapon::AWeapon( void ){
	this->_name = "Default";
	this->_APCost = 0;
	this->_damage = 0;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage){
	this->_name = name;
	this->_APCost = apcost;
	this->_damage = damage;
}

AWeapon::AWeapon( AWeapon const & src ) {
	AWeapon::operator=(src);
}

AWeapon::~AWeapon( void ) {
	this->_damage = -1;
}

AWeapon &	AWeapon::operator=( AWeapon const & rhs ) {
	if (this != & rhs)
	{
		this->_name = rhs._name;
		this->_APCost = rhs._APCost;
		this->_damage = rhs._damage;
	}
	return ( *this );
}

std::string 	AWeapon::get_name() const{
	return (this->_name);
}

int				AWeapon::get_APCost() const{
	return (this->_APCost);
}

int				AWeapon::get_damage() const{
	return (this->_damage);
}

void 			AWeapon::attack() const{

}

std::ostream &				operator<<(std::ostream & o, AWeapon const & rhs )
{
	o << rhs.get_name() << std::endl;
	return o;
}