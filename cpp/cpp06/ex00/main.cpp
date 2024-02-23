/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:20:30 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/21 14:34:07 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	//ScalarConverter test;
	if (argc == 2)
	{
		std::string str = argv[1];
		ScalarConverter::convert(str);
	}
	else
		std::cerr << "Error: incorrect number of arguments. Need only ./convert and the data to be converted." << std::endl;
}