/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:53:19 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 12:26:45 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("Bob");
	ClapTrap c(b);
	c.setName("Bob_Copy");
	std::cout << std::endl;
	a.attack("Bob");
	a.takeDamage(0);
	a.takeDamage(5);
	a.beRepaired(5);
	a.takeDamage(10);
	a.attack("Bob");
	for (int i = 0; i < 10; i++)
		b.attack("Bob_Copy");
	b.beRepaired(3);
	c.attack("Default");
	a.takeDamage(0);
	std::cout << std::endl;
	return (0);
}
