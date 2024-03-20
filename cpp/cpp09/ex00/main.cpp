/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:38:07 by lobertho          #+#    #+#             */
/*   Updated: 2024/03/12 16:10:03 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string infilename = argv[1];
		
		BitcoinExchange test;
		test.evaluate(infilename);
	}
	else
		std::cerr << "Erorr: could not open file." << std::endl;
	return (0);
}