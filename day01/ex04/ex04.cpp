/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ex04.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 18:12:03 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 18:15:58 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* strP = &str;
	std::string& strR = str;
	std::cout << "Trought A Pointer: " << *strP << std::endl;
	std::cout << "Trought A Reference: " << strR << std::endl;
	return 0;
}

