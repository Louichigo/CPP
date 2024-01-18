/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:58:23 by lobertho          #+#    #+#             */
/*   Updated: 2023/12/19 18:09:04 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	zombiespasseport(int n)
{
	std::string names[7] = {"Jeff", "Paul", "Leo", "Yanis", "David", "Chien", "Arghh"};
	if (n >= 7)
	{
		int i = n / 7 + 1;
		n = n % 7;
		std::string ivalue = std::to_string(i);
		std::string str = names[n].substr(0, names[n].length()) += ivalue;
		return (str);
	}
	return (names[n]);

}

int main()
{
	int n = 20;
	Zombie *horde = zombieHorde(n, "");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;	
	return 0;
}