/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:05:50 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/29 14:40:56 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &src);
	Animal	&operator=(const Animal &rhs);

	virtual void	makeSound() const;
	std::string	getType() const;
};

#endif