/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:26:24 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/30 14:33:56 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "fraggy";
	this->AttackDamage = 30;
	this->EnergyPoints = 100;
	this->HitPoints = 100;
	std::cout << "A default FragTrap was created. We will name him fraggy. He has " << this->HitPoints;
	std::cout << " points of health and " << this->EnergyPoints << " points of energy." << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap named " << this->name << " destroyed." << std::endl;
	return;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name) 
{
	this->AttackDamage = 30;
	this->EnergyPoints = 100;
	this->HitPoints = 100;
	std::cout << "A FragTrap named " << this->name << " was created. He has " << this->HitPoints;
	std::cout << " points of health and " << this->EnergyPoints << " points of energy." << std::endl;
	return;
	
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
	return;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "FragTrap " << this->name << " has been copied." << std::endl;
	this->name = rhs.name;
	this->HitPoints = rhs.HitPoints;
	this->AttackDamage = rhs.AttackDamage;
	this->EnergyPoints = rhs.EnergyPoints;
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (this->EnergyPoints > 0)
	{
		this->EnergyPoints -= 1;
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->name << " has no energy and can't attack..." << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->HitPoints > 0)
		std::cout << "FragTrap " << this->name << ": Wanna high five ?" << std::endl;
	else
		std::cout << "FragTrap " << this->name << " is sadly dead and cannot high fives anyone anymore..." << std::endl;
}	