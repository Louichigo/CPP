/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:32:18 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/29 14:38:42 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "A dog is born." << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "A dog has died." << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = src;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	std::cout << "A dog has been copied." << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog: ~Wouf Wouf~" << std::endl;
}
