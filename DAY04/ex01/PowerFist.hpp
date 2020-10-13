
#ifndef POWERFIST_H
#define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(std::string const & name, int apcost, int damage);
		PowerFist(PowerFist const &);
		virtual ~PowerFist(void);

		PowerFist &				operator=( PowerFist const &);
		virtual void 			attack(void) const;

	private:

};

std::ostream &					operator<<(std::ostream & o, PowerFist const &);

#endif
