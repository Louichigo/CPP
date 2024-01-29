/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:40:20 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/29 15:55:46 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Aanimal.hpp"

class Cat : public Aanimal
{
private:

public:
	Cat();
	~Cat();
	Cat(const Cat &src);

	Cat	&operator=(const Cat &rhs);

	void	makeSound() const;
};



#endif