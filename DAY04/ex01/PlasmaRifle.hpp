
#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		PlasmaRifle(std::string const & name, int apcost, int damage);
		PlasmaRifle(PlasmaRifle const &);
		virtual ~PlasmaRifle(void);

		PlasmaRifle &			operator=( PlasmaRifle const &);
		virtual void 			attack(void) const;

	private:
};

std::ostream &					operator<<(std::ostream & o, PlasmaRifle const &);

#endif
