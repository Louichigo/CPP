/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:05:04 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/29 15:57:47 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aanimal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Aanimal *animals[8];

	for(int i = 0; i < 4; i++)
		animals[i] = new Dog();
	for(int i = 4; i < 8; i++)
		animals[i] = new Cat();

	std::cout << "\n\n" << std::endl;
	
	for(int i = 0; i < 8; i++)
		delete animals[i];

	//std::cout << "\n\n" << std::endl;
	//Aanimal test;
	//std::cout << test.getType() << std::endl;
	return 0;
}