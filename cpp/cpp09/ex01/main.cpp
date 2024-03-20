/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:44:26 by lobertho          #+#    #+#             */
/*   Updated: 2024/03/13 15:07:23 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string expression = argv[1];

		RPN line;
		line.calc(expression);
	}
	else
		std::cout << "Error: wrong number of arguments," << std::endl;
	return (0);
}