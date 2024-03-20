/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:04:40 by lobertho          #+#    #+#             */
/*   Updated: 2024/03/20 16:04:24 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//utiliser vecteur et list

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc > 2)
	{	
		PmergeMe test;
		test.pmerge(argv);
	}
	else
		std::cerr << "Error. Wrong number of arguments." << std::endl;
	return (0);
}