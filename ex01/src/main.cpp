/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:53:43 by jyap              #+#    #+#             */
/*   Updated: 2025/01/06 17:01:07 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main()
{
	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
	{
		ClapTrap a;
		ClapTrap b("Bob");

		std::cout << "Testing" << std::endl;
		a.attack("Bob");
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Default");
		b.beRepaired(3);
	}
	std::cout << "\n\n### TESTING SCAVTRAP ###\n" << std::endl;
	{
		ScavTrap c;
		ScavTrap d("Dom");

		std::cout << "Testing" << std::endl;
		c.attack("Dom"); //Scav
		c.takeDamage(25); //Clap
		c.beRepaired(20); //Clap
		c.guardGate(); //Scav
		c.guardGate(); //Scav
		d.attack("Default"); //Scav
		d.takeDamage(25); //Clap
		d.takeDamage(20); //Clap
		d.attack("Default"); //Scav
	}
	return (0);
}
