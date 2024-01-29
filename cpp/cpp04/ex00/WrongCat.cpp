/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:09:26 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/29 14:39:41 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "A wrong cat is born." << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "A wrong cat has died." << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "Wrong cat copy constructor called." << std::endl;
	*this = src;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "A wrong cat has been copied." << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat: ~Wouf wouf~" << std::endl;
}