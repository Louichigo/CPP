/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:19:25 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/26 14:51:46 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::string	TableauSTR[] = {"premier", "deuxieme", "blablabla", "dernier"};
	int			TableauINT[] = {3, 5, 56, 453, -2};
	double		TableauDOUBLE[] = {4.53, 7654.4, -3.34, 0.3};


	std::cout << "Iteration on string array:" << std::endl;
	iter(TableauSTR, (sizeof(TableauSTR) / sizeof(std::string)), ft_print<std::string>);
	std::cout << std::endl;

	std::cout << "Iteration on int array:" << std::endl;
	iter(TableauINT, (sizeof(TableauINT) / sizeof(int)), ft_print<int>);
	std::cout << std::endl;

	std::cout << "Iteration on double array:" << std::endl;
	iter(TableauDOUBLE, (sizeof(TableauDOUBLE) / sizeof(double)), ft_print<double>);
	std::cout << std::endl;

	return 0;
}