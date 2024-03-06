/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:18:27 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/28 17:25:52 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define SPANSIZE 10

int main()
{
	//Subject tests
	Span sp = Span(5);
	std::vector<int> Sit;

	Sit.push_back(6);
	Sit.push_back(3);
	Sit.push_back(17);
	Sit.push_back(9);
	Sit.push_back(11);
	sp.addRange(Sit.begin(), Sit.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;

	//My working tests
	Span span(SPANSIZE);
	std::srand(std::time(NULL));

	std::cout << "/////SPAN VALUES /////" << std::endl;
	for(int i = 0; i < SPANSIZE; i++)
	{
		const int value = rand() % 100;
		span.addNumber(value);
		std::cout << value << std::endl;
	}
	std::cout << "//////////////////////" << std::endl;

	std::cout << "ShortestSpan = " << span.shortestSpan() << std::endl;
	std::cout << "LongestSpan = " << span.longestSpan() << std::endl;

	std::cout << std::endl;

	//My exceptions tests
	try
	{
		Span nul(3);
		nul.addNumber(2);
		nul.addNumber(5);
		nul.addNumber(44);
		nul.addNumber(4);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span noob(1);
		noob.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span Itnoob(3);
		std::vector<int> Sitnoob;

		Sitnoob.push_back(3);
		Sitnoob.push_back(43);
		Sitnoob.push_back(432);
		Sitnoob.push_back(33);
		Itnoob.addRange(Sitnoob.begin(), Sitnoob.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	return (0);
}