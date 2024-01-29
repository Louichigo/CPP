/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:05:50 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/29 15:49:33 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class Aanimal
{
protected:
	std::string	type;

public:
	Aanimal();
	virtual ~Aanimal();
	Aanimal(const Aanimal &src);
	Aanimal	&operator=(const Aanimal &rhs);

	virtual void	makeSound() const = 0;
	std::string	getType() const;
};

#endif