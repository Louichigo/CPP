/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:58:46 by lobertho          #+#    #+#             */
/*   Updated: 2023/12/18 15:21:09 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"

class PhoneBook
{
private:
	Contact contact[9];
	void	search(int num);

public:
	PhoneBook();
	~PhoneBook();
	void	add(int num);
	void	display(int num, int full);
};

#endif