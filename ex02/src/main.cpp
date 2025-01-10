/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:54:19 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 12:48:38 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n\n### TESTING FRAGTRAP ###\n" << std::endl;
	{
		FragTrap a;
		FragTrap b("Bob");

		std::cout << "Testing" << std::endl;
		a.highFiveGuys();
		a.attack("Bob");
		b.takeDamage(30);
		a.takeDamage(1);
		b.highFiveGuys();
	}
	return (0);
}
