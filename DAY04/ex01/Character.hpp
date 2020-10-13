
#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	public:
		Character(void);
		Character(std::string const &);
		Character(Character const &);
		virtual ~Character(void);

		Character &			operator=( Character const &);
		void 				recoverAP();
		void 				equip(AWeapon*);
		void 				attack(Enemy*);
		std::string 		get_name() const;
		int			 		get_AP() const;
		std::string 		get_weaponname() const;
		bool				get_weapon() const;
		
	private:
		std::string			_name;
		AWeapon *			_weapon;
		int					_AP;
};

std::ostream &		operator<<(std::ostream & o, Character const &);

#endif
