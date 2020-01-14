#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string, Weapon&);
		void attack(void) const;
	private:
		std::string _name;
		Weapon& _weapon;
};

#endif
