/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 18:57:43 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 19:27:17 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Brain.hpp"

class Human
{
	public:
		Human(void);
		~Human(void);
		Brain const brain;
		Brain const & getBrain(void);
		std::string identify(void);
};
