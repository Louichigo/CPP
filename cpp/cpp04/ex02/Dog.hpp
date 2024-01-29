/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:32:25 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/29 15:55:49 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Aanimal.hpp"

class Dog : public Aanimal
{
private:

public:
	Dog();
	~Dog();
	Dog(const Dog &src);

	Dog	&operator=(const Dog &rhs);

	void	makeSound() const;
};

#endif