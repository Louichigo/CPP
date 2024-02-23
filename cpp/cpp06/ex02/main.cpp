/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:03:21 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/23 16:06:26 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABC.hpp"

Base* generate(void)
{
	std::srand(std::time(0));
	int random = std::rand() % 3;
	if (random == 0)
		return (new A());
	else if (random == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cerr << "ERROR" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A &d = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast &e){}
	try
	{
		B &d = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::bad_cast &e){}
	try
	{
		C &d = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::bad_cast e){}	
}

int main()
{
	Base *test = generate();

	identify(test);
	identify(*test);

	delete test;
	return 0;
}