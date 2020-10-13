
#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class AWeapon
{
	public:
		AWeapon(void);
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &);
		virtual ~AWeapon();
		AWeapon &		operator=( AWeapon const & rhs );

		std::string 			get_name() const;
		int						get_APCost() const;
		int						get_damage() const;
		virtual void 			attack() const = 0;

	private:
		std::string				_name;
		int						_APCost;
		int						_damage;

	private:
};

std::ostream &		operator<<(std::ostream & o, AWeapon const &);

#endif
