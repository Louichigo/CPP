/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:10:45 by lobertho          #+#    #+#             */
/*   Updated: 2023/12/18 15:27:02 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

void	Contact::fill_contact(int num)
{
	std::cout << "Please fill the informations for the new contact\nFirst name: ";
	std::getline(std::cin, firstname);
	while (firstname == "" || firstname[0] == 32)
	{
		std::cout << "The field cannot be empty\nFirst name: ";
		std::getline(std::cin, firstname);
	}
	std::cout << "Last name: ";
	std::getline(std::cin, lastname);
	while (lastname == "" || lastname[0] == 32)
	{
		std::cout << "The field cannot be empty\nLast name: ";
		std::getline(std::cin, lastname);
	}
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	while (nickname == "" || nickname[0] == 32)
	{
		std::cout << "The field cannot be empty\nNick name: ";
		std::getline(std::cin, nickname);
	}
	std::cout << "Phone number: ";
	std::getline(std::cin, phonenumber);
	while (phonenumber == "" || phonenumber[0] == 32)
	{
		std::cout << "The field cannot be empty\nPhone number: ";
		std::getline(std::cin, phonenumber);
	}
	std::cout << "His darkest secret: ";
	std::getline(std::cin, darkestsecret);
	while (darkestsecret == "" || darkestsecret[0] == 32)
	{
		std::cout << "The field cannot be empty\nHis darkest secret: ";
		std::getline(std::cin, darkestsecret);
	}
	std::cout << "\nNew contact number [" << num << "] successfully added !" << std::endl;
}

void	Contact::contact_trunc(std::string str)
{
	if (str.length() <= 10)
		std::cout << std::setw(10) << str << "|";
	else
	{
		str = str.substr(0,9) + ".";
		std::cout << std::setw(10) << str << "|";
	}
}

void	Contact::contact_list(int num)
{
	std::cout << "|" << std::setw(10) << num << "|";
	contact_trunc(firstname);
	contact_trunc(lastname);
	contact_trunc(nickname);
	std::cout << std::endl;
}

void	Contact::print_contact(int num)
{
	std::cout << "***********************************" << std::endl;
	std::cout << "Contact number: " << num << std::endl;
	std::cout << "First name: " << firstname << std::endl;
	std::cout << "Last name: " << lastname << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phonenumber << std::endl;
	std::cout << "Darkest secret: " << darkestsecret << std::endl;
	std::cout << "***********************************" << std::endl;
}