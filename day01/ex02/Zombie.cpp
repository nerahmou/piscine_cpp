/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 15:57:55 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:23:51 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "New Zombie !" << std::endl;
	announce();
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
