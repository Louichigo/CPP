/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:40:11 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/29 14:38:29 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "A cat is born." << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "A cat has died." << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << "A cat has been copied." << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat: ~Meow Meow~" << std::endl;
}