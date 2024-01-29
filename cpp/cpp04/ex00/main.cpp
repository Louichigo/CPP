/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:05:04 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/29 14:27:56 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //cat sound
	j->makeSound(); //dog sound
	meta->makeSound(); //animal sound
	delete meta;
	delete j;
	delete i;

	std::cout << "\n\n" << std::endl;

	const WrongAnimal* test = new WrongCat();
	const WrongAnimal a;
	WrongCat nul;
	std::cout << test->getType() << " " << std::endl;
	std::cout << a.getType() << " " << std::endl;
	std::cout << nul.getType() << " " << std::endl;
	test->makeSound(); //wrong cat sound
	a.makeSound(); //wrong animal sound
	nul.makeSound(); //wrong cat sound
	delete test;
	return 0;
}