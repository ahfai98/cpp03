/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:53:19 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 21:36:58 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("Cody");
	ClapTrap c(b);
	std::cout << std::endl;
	a.attack("some other robot");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("some other other robot");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
	{
		b.attack("Default");
		a.takeDamage(0);
	}
	b.beRepaired(3);
	c.attack("Default");
	a.takeDamage(0);
	std::cout << std::endl;
	return (0);
}
