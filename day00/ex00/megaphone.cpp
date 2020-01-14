/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   megaphone.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 13:29:45 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 13:23:21 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>

void	megaphone(const char **str)
{
	for (size_t i = 0; str[i]; i++)
		for (size_t j = 0; j < std::strlen(str[i]); j++)
			std::cout << (char)toupper(str[i][j]);
		std::cout << std::endl;
}

int main(int argc, const char *argv[])
{

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		megaphone(++argv);
	return 0;
}
