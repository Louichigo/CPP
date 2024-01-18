/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:48:44 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/08 23:40:59 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
	weapon.getType();
}

HumanA::~HumanA()
{
	return;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}