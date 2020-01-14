/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 15:10:28 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 15:30:49 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <iostream>
# include <string>


class Pony{
	public:
		Pony(std::string, std::string color, short weight);
		~Pony(void);
	private:
		std::string _segment;
		std::string _color;
		short _weight;
};

Pony* ponyOnTheHeap(void);
Pony ponyOnTheStack(void);
#endif
