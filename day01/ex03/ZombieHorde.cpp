/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHorde.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 17:29:57 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 18:04:15 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _nbZombie(0)
{
	std::cout << "New ZombieHorde!" << std::endl;
	if (N <= 0)
		std::cout << "\tWarning: parameter 'N' must be positive" << std::endl;
	else
	{
		this->_zombies = new Zombie[N];
		this->_nbZombie = N;
		announce();
	}
	return;
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "Destroy the ZombieHorde!" << std::endl;
	delete [] this->_zombies;
}

void ZombieHorde::announce(void) const
{
	for (int i = 0; i < this->_nbZombie; i++ )
		this->_zombies[i].announce();
	return;
}
