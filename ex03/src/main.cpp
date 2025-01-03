/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:55:09 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 23:12:10 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main()
{
	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
	{
		std::cout << "Constructing" << std::endl;
		ClapTrap a;
		ClapTrap b("Cody");

		std::cout << "Testing" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		std::cout << "Deconstructing" << std::endl;
	}
	std::cout << "\n\n### TESTING SCAVTRAP ###\n" << std::endl;
	{
		std::cout << "Constructing" << std::endl;
		ScavTrap a;
		ScavTrap b("Savage");

		std::cout << "Testing" << std::endl;
		a.attack("CloneTrap");
		// for (int i = 0; i < 50; i++)
		// 	a.attack("CloneTrap");
		a.beRepaired(22);
		a.takeDamage(21);
		a.beRepaired(22);
		a.guardGate();
		a.guardGate();
		b.attack("Savage-clone");
		b.takeDamage(101);
		b.takeDamage(15);
		b.attack("ScavTrap-clone");
		std::cout << "Deconstructing" << std::endl;
	}
	std::cout << "\n\n### TESTING FRAGTRAP ###\n" << std::endl;
	{
		std::cout << "Constructing" << std::endl;
		FragTrap a;
		FragTrap b("Chadd");

		std::cout << "Testing" << std::endl;
		a.highFiveGuys();
		a.attack("some random dude");
		a.takeDamage(101);
		a.takeDamage(1);
		a.attack("some random dude");
		b.highFiveGuys();
		// for(int i = 0; i < 101; i++)
		// 	b.attack("FragTrap-clone");
		std::cout << "Deconstructing" << std::endl;
	}
	std::cout << "\n\n### TESTING DIAMONDTRAP ###\n" << std::endl;
	{
		std::cout << "Constructing" << std::endl;
		DiamondTrap a;
		DiamondTrap b("TestDT");
		DiamondTrap c(a);

		std::cout << "Testing" << std::endl;
		a.whoAmI();
		a.attack("some random dude");
		b.whoAmI();
		b.attack("TestDT-clone");
		c.whoAmI();
		a.guardGate();
		a.highFiveGuys();
		b.guardGate();
		b.whoAmI();
		b.guardGate();
		b.whoAmI();
		std::cout << "Deconstructing" << std::endl;
	}
	return (0);
}
