/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:55:09 by jyap              #+#    #+#             */
/*   Updated: 2025/01/06 19:00:32 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "\n\n### TESTING DIAMONDTRAP ###\n" << std::endl;
	{
		DiamondTrap a;
		DiamondTrap b("TestDT");
		DiamondTrap c(a);

		//calling attack will use ScavTrap's attack() and damage
		std::cout << "Testing" << std::endl;
		a.whoAmI();
		a.attack("some random dude");
		b.whoAmI();
		b.attack("TestDT-clone");
		c.whoAmI();
		a.guardGate();
		a.highFiveGuys();
	}
	return (0);
}
