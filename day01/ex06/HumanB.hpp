#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string);
		void attack(void) const;
		void setWeapon(Weapon&);
	private:
		std::string _name;
		Weapon* _weapon;
};

#endif
