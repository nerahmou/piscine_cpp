/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieEvent.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 16:23:04 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:46:07 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string names[6] = {"lala", "lulu", "lele", "lolo", "lili", "lyly"};

ZombieEvent::ZombieEvent(void)
{
	this->_type = "bebe";
	std::cout << "ZombieEvent created !" << std::endl;
	return;
}
void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, this->_type);
}

Zombie ZombieEvent::randomChump(void)
{
	Zombie zombie = Zombie(names[rand() % (STRING_ARRAY_LENGTH(names))], this->_type);
	return zombie;
}
