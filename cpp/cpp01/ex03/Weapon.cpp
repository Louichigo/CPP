/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:48:12 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/08 23:21:52 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	setType(str);
}

Weapon::~Weapon()
{
	return;	
}

std::string	Weapon::getType() const
{
	return this->type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}