/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:55:09 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 14:12:30 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "\n\n### TESTING DIAMONDTRAP ###\n" << std::endl;
	{
		DiamondTrap a;
		DiamondTrap b("Bob");
		DiamondTrap c(a);

		std::cout << "Testing" << std::endl;
		a.whoAmI();
		a.attack("Bob");
		b.whoAmI();
		b.attack("A_Copy");
		c.whoAmI();
		a.guardGate();
		a.guardGate();
		a.highFiveGuys();
		a.whoAmI();
	}
	return (0);
}
