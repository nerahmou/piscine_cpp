#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "<-----New Weapon(" << type << ")----->" << std::endl;
	return;
}

std::string const & Weapon::getType(void) const
{
	return this->_type;
}


void  Weapon::setType(std::string type)
{
	this->_type = type;
}
