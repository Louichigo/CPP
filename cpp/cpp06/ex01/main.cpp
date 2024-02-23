/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:40:44 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/21 16:48:14 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data test;
	test.value = 42;

	std::cout << "value = " << test.value << std::endl;

	uintptr_t serialized = Serializer::serialize(&test);
	Data *deserialized = Serializer::deserialize(serialized);
	std::cout << "value = " << deserialized->value << std::endl;
}