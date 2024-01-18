/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:49:02 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/08 23:55:45 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	is_set = 0;
}

HumanB::~HumanB()
{
	return;	
}

void	HumanB::attack()
{
	if (is_set == 0)
	{
		std::cout << this->name << " attacks with their bare hands " << std::endl;
		return;
	}
	else
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	is_set = 1;
	this->weapon = &weapon;
}