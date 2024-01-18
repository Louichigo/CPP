/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:47:25 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/17 14:53:42 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value (0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = rhs.getRawBits();
	return (*this);
}

Fixed::Fixed(const int v_int)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = v_int << bits;
}

Fixed::Fixed(const float v_float)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf((v_float) * (1 << bits));	
}

int	Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float	Fixed::toFloat() const
{
	return ((float)value / (1 << bits));
}

int	Fixed::toInt() const
{
	return (value >> bits);
}

std::ostream	&operator<<(std::ostream &o, const Fixed &i)
{
	o << i.toFloat();
	return (o);
}