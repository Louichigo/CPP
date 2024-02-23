/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:41:05 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/21 16:47:48 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <string>
#include <iostream>

struct Data{
	int value;
};

class Serializer
{
private:
	Serializer();
	~Serializer();
	Serializer(const Serializer &src);
	Serializer &operator=(const Serializer &rhs);

public:
	static uintptr_t	serialize(Data *ptr);
	static Data*		deserialize(uintptr_t raw);


};

#endif