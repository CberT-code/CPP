
#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class Enemy
{
	public:
		Enemy(void);
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &);
		virtual ~Enemy(void);

		Enemy &				operator=( Enemy const &);
		std::string			get_type() const;
		int 				get_HP() const;
        virtual void 		takeDamage(int);

	private:
		std::string			_type;
		int					_HP;	
};

std::ostream &				operator<<(std::ostream & o, Enemy const &);

#endif
