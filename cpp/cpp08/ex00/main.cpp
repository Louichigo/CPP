/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:27:11 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/27 16:12:03 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::vector<int> test;
	//std::list<int> test;

		test.push_back(4);
		test.push_back(34);
		test.push_back(543);
		test.push_back(66);
		easyfind(test, 4);
	try
	{
		easyfind(test, 22);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}