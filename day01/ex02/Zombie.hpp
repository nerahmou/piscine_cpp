/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 15:43:52 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:23:40 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <cstdlib>
# include <array>
# define STRING_ARRAY_LENGTH(array) sizeof(array) / sizeof(std::string)

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void announce(void) const;
	private:
		std::string _name;
		std::string _type;
};
#endif
