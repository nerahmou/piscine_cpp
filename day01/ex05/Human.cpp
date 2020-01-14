/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 19:02:35 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 19:27:54 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void): brain(Brain())
{
	return;
}

Human::~Human(void)
{
	return;
}

std::string Human::identify(void)
{
	return this->brain.identify();
}

Brain const & Human::getBrain(void)
{
	return this->brain;
}
