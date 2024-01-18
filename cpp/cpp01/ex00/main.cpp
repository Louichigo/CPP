/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:12:28 by lobertho          #+#    #+#             */
/*   Updated: 2023/12/19 16:55:35 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie *dynamicZ = newZombie("HeapZombie");

	randomChump("StackZombie");

	dynamicZ->announce();

	randomChump("StackZombie2");

	delete dynamicZ;

	return 0;
}