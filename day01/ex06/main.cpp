#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon test1()
{
	Weapon w("ss");
	std::cout << &w << std::endl;
	return w;
}

Weapon* test3()
{
	Weapon* w = new Weapon("ss");
	std::cout << w << std::endl;
	return w;
}
int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}
}
