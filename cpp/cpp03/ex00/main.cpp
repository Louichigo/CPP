/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:32:12 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/19 13:38:28 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap bob("Bob");

	std::cout << "\033[31m";
	bob.attack("a tree");
	bob.attack("a bin");
	bob.attack("a stranger");
	bob.attack("a bird");
	bob.attack("someone in the park");
	bob.attack("a wall");
	std::cout << "\033[37m" << std::endl;

	bob.beRepaired(2);
	bob.takeDamage(2);
	bob.beRepaired(5);
	bob.takeDamage(6);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	return (0);
}