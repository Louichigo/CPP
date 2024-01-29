/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:05:33 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/29 15:36:07 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aanimal.hpp"

Aanimal::Aanimal()
{
	this->type = "Animal";
	std::cout << "An Animal is born..." << std::endl; 
}

Aanimal::~Aanimal()
{
	std::cout << "An animal has died..." << std::endl;
}

Aanimal::Aanimal(const Aanimal &src)
{
	std::cout << "Animal copy constructor called..." << std::endl;
	*this = src;
}

Aanimal	&Aanimal::operator=(const Aanimal &rhs)
{
	std::cout << "An animal has been copied..." << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Aanimal::makeSound() const
{
	std::cout << "~Animal noise~" << std::endl;
}

std::string	Aanimal::getType() const
{
	return (this->type);
}