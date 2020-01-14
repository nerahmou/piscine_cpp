/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 16:57:04 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:25:49 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent zombieEvent = ZombieEvent();
	std::array<Zombie*, 2> zombies;
	zombies[0] = zombieEvent.newZombie("Nessman");
	zombieEvent.setZombieType("adulte");
	zombies[1] = zombieEvent.newZombie("NessBoss");
	zombieEvent.randomChump();
	zombieEvent.randomChump();
	zombieEvent.randomChump();
	zombieEvent.randomChump();
	zombieEvent.randomChump();
	delete zombies[0];
	delete zombies[1];
	return 0;
}
