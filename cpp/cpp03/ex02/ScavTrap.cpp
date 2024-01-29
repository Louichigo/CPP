/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:42:53 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/24 13:54:54 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "xp";
	this->AttackDamage = 20;
	this->EnergyPoints = 50;
	this->HitPoints = 100;
	std::cout << "A default ScavTrap wa created. We will name him xp. He has " << this->HitPoints;
	std::cout << " points of health and " << this->EnergyPoints << " points of energy." << std::endl;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap named " << this->name << " destoryed." << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) 
{
	this->AttackDamage = 20;
	this->EnergyPoints = 50;
	this->HitPoints = 100;
	std::cout << "A ScavTrap named " << this->name << " was created. He has " << this->HitPoints;
	std::cout << " points of health and " << this->EnergyPoints << " points of energy." << std::endl;
	return;
	
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
	return;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "ScavTrap " << this->name << " has been copied." << std::endl;
	this->name = rhs.name;
	this->HitPoints = rhs.HitPoints;
	this->AttackDamage = rhs.AttackDamage;
	this->EnergyPoints = rhs.EnergyPoints;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->EnergyPoints > 0)
	{
		this->EnergyPoints -= 1;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " has no energy and can't attack..." << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->HitPoints > 0)
		std::cout << "ScavTrap " << this->name << " is now in gate keeper mode." << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " is dead and cannot guard anything anymore..." << std::endl;
	return;
}