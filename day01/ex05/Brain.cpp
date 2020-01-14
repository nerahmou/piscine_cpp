/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Brain.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 19:06:06 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 19:28:21 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::identify(void) const
{
	std::stringstream stream;

	stream << std::hex << this;
	return stream.str();
}
