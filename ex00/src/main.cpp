/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:53:19 by jyap              #+#    #+#             */
/*   Updated: 2025/01/06 19:18:22 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("Bob");
	ClapTrap c(b);
	
	std::cout << std::endl;
	a.attack("some other robot");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("some other other robot");
	for (int i = 0; i < 10; i++)
		b.attack("Default");
	b.beRepaired(3);
	c.attack("Default");
	a.takeDamage(0);
	std::cout << std::endl;
	return (0);
}
