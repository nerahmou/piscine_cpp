/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 15:43:52 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 18:10:52 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# define STRING_ARRAY_LENGTH(array) sizeof(array) / sizeof(std::string)
# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void) const;
	private:
		std::string _name;
		std::string _type;
};
#endif
