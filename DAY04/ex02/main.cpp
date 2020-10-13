#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Header.hpp"

int main() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	std::cout << BLUE << "there is : " << vlc->get_count() << " unity in this squad." << RESET << std::endl;
	vlc->push(bob);
	std::cout << BLUE << "there is : " << vlc->get_count() << " unity in this squad." << RESET << std::endl;
	vlc->push(jim);
	std::cout << BLUE << "there is : " << vlc->get_count() << " unity in this squad." << RESET << std::endl;
	for (int i = 0; i < vlc->get_count(); ++i) {
		ISpaceMarine* cur = vlc->getUnit(i);
	
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << std::endl;
	}
	delete vlc;
	return 0;
}