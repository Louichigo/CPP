/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:38:44 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/09 15:26:15 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	std::string levels[] = {"debug", "info", "warning", "error"};
	int i = 0;

	if (argc != 2)
	{
		std::cout << "Error. 1 argument is required..." << std::endl;
		return 1;
	}
	while (i < 4)
	{
		if (levels[i] == argv[1])
			break;
		i++;
	}
	switch(i){
	case 0:
		harl.complain(levels[i]);
		break;
	case 1:
		harl.complain(levels[i]);
		break;
	case 2:
		harl.complain(levels[i]);
		break;
	case 3:
		harl.complain(levels[i]);
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return 0;
}