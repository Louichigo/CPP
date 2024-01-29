/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:32:12 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/24 13:56:54 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	
	ClapTrap bob("Bob");
	bob.attack("a tree");
	bob.takeDamage(2);
	bob.beRepaired(5);

	std::cout << "\n\n\n" << std::endl;

	ScavTrap px5("Px5");
	px5.attack("a tree");
	px5.takeDamage(2);
	px5.beRepaired(5);
	px5.guardGate();

	std::cout << "\n\n\n" << std::endl;

	FragTrap frag;
	frag.attack("a tree");
	frag.takeDamage(2);
	frag.beRepaired(5);
	frag.highFivesGuys();

	std::cout << "\n\n\n" << std::endl;
	return (0);
}