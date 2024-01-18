/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:56:29 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/18 11:29:30 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Phonebook.hpp"
#include <iostream>

int main()
{
	PhoneBook phonebook;
	std::string str;
	int count = 0;
	int	full = 0;
	std::cout << "\n*****WELCOME TO YOUR PHONEBOOK*****\n\nPEASE ENTER A COMMAND:\n";
	std::cout << "ADD to create a new contact\nSEARCH to look for a contact\n";
	std::cout << "EXIT to exit the phonebook\n" << std::endl;

	while (1)
	{
		std::cout << "Phonebook> ";
		std::getline(std::cin, str);
		if (str == "EXIT")
		{
			std::cout << "Exiting phonebook..." << std::endl;
			return (0);
		}
		else if (str == "ADD")
		{
			count++;
			if (count > 8)
			{
				count = 1;
				full = 1;
			}
			phonebook.add(count);
		}
		else if (str == "SEARCH")
			phonebook.display(count, full);
		else
		{}
	}
	return (0);
}