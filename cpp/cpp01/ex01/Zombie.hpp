/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:05:27 by lobertho          #+#    #+#             */
/*   Updated: 2023/12/19 17:35:09 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	~Zombie();
	void	announce();
	void	zname(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
std::string	zombiespasseport(int n);

#endif