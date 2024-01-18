/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:10:54 by lobertho          #+#    #+#             */
/*   Updated: 2023/12/18 15:05:50 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;
	void	contact_trunc(std::string str);
public:
	Contact();
	~Contact();
	void	fill_contact(int num);
	void	print_contact(int num);
	void	contact_list(int num);
};

#endif