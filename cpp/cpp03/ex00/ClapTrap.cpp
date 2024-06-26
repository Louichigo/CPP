/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:32:38 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/30 14:32:44 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	this->name = "Mr.X";
	std::cout << "A default ClapTrap was created. We will name him Mr.X. He has " << this->HitPoints;
	std::cout << " points of health and " << this->EnergyPoints << " points of energy." << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	this->name = name;
	std::cout << "A ClapTrap named " << this->name << " was created. He has " << this->HitPoints;
	std::cout << " points of health and " << this->EnergyPoints << " points of energy." << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named " << this->name << " destroyed." << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap " << this->name << " has been copied." << std::endl;
	this->name = rhs.name;
	this->HitPoints = rhs.HitPoints;
	this->AttackDamage = rhs.AttackDamage;
	this->EnergyPoints = rhs.EnergyPoints;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->HitPoints <= 0)
		std::cout << this->name << " cant attack because he's dead..." << std::endl;
	else if (this->EnergyPoints > 0)
	{
		this->EnergyPoints -= 1;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " has no energy and can't attack..." << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->HitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage ans has now "; 
	std::cout << this->HitPoints << " points of health." << std::endl;
	if (this->HitPoints <= 0)
		std::cout << "ClapTrap " << this->name << " did not survive..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoints <= 0)
		std::cout << this->name << " cant heal himself because he's dead..." << std::endl;
	else if (this->EnergyPoints > 0)
	{
		if (this->HitPoints == 10)
		{
			std::cout << "ClapTrap " << this->name << " is already full health." << std::endl;
			return;
		}
		this->HitPoints += amount;
		this->EnergyPoints -= 1;
		if (this->HitPoints >= 10)
		{
			this->HitPoints = 10;
			std::cout << "ClapTrap " << this->name << " is now full health." << std::endl;
		}
		else
		{
			std::cout << "ClapTrap " << this->name << " heals " << amount << " points of health and has now ";
			std::cout << this->HitPoints << " points of health." << std::endl;
		}
	}
	else
		std::cout << "ClapTrap " << this->name << " has no energy and can't heal himself..." << std::endl;
}