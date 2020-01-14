/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 15:57:55 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 18:09:44 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string names[6] = {"lala", "lulu", "lele", "lolo", "lili", "lyly"};

std::string randomName()
{
	return names[rand() % (STRING_ARRAY_LENGTH(names))];
}

Zombie::Zombie(void) : _name(randomName()), _type("bebe")
{
	std::cout << "New Zombie !" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " Destroyed !" << std::endl;
	return;
}
void Zombie::announce(void) const
{
	std::cout << "\tMy Name:" << this->_name << "\n\tMy Type:" << this->_type << std::endl;
	return;
}
