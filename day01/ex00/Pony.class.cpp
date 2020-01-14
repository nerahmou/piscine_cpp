/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 15:15:45 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 15:35:25 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Pony.class.hpp"

Pony::Pony(std::string segment, std::string color, short weight) :
														_segment(segment),
														_color(color),
														_weight(weight)
{
	std::cout << "New Pony in the : " << segment << std::endl;
	std::cout << "\tcolor:" << color << "\n\tweight:" << weight << std::endl;
	return;
}
Pony::~Pony(void)
{
	std::cout << "Delete Pony in the : " << this->_segment << std::endl;
	return;
}

Pony* ponyOnTheHeap(void)
{
	return new Pony("heap", "black", 500);
}

Pony ponyOnTheStack(void)
{
	return Pony("stack", "red", 100);
}
