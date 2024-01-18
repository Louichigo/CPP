/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:30:58 by lobertho          #+#    #+#             */
/*   Updated: 2023/12/18 15:22:59 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void	PhoneBook::add(int num)
{
	contact[num].fill_contact(num);
}

void	PhoneBook::display(int num, int full)
{
	int	i;
	
	i = 1;
	if (num == 0)
	{
		std::cout << "There isnt any registered contacts." << std::endl;
		return;
	}
	std::cout << "---------------------------------------------" << std::endl;
	if (full == 0)
	{
		while (i <= num)
		{
			contact[i].contact_list(i);
			i++;
			std::cout << "---------------------------------------------" << std::endl;
		}
	}
	else
	{
		while (i <= 8)
		{
			contact[i].contact_list(i);
			i++;
			std::cout << "---------------------------------------------" << std::endl;
		}
	}
	search(num);
}

void	PhoneBook::search(int num)
{
	std::string str;
	int cnum;
	int	i;

	std::cout << "Please enter the desired contact number to show informations: ";
	std::getline(std::cin, str);
	i = 0;
	if (str == "")
	{
		std::cout << "You must enter a number. Try again with command \"SEARCH\"..." << std::endl;
		return;
	}
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{	
			std::cout << "You must enter a number. Try again with command \"SEARCH\"..." << std::endl;
			return;
		}
		i++;
	}
	cnum = std::stoi(str);
	if (cnum < 1 || cnum > 8 || cnum > num)
	{
		std::cout << "Incorrect number. Try again with command \"SEARCH\"..." << std::endl;
		return;
	}
	contact[cnum].print_contact(cnum);
}