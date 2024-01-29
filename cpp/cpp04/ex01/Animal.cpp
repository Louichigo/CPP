/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:05:33 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/29 14:38:58 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "An animal is born..." << std::endl; 
}

Animal::~Animal()
{
	std::cout << "An animal has died..." << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called..." << std::endl;
	*this = src;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	std::cout << "An animal has been copied..." << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "~Animal noise~" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}