/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:54:15 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 12:51:55 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap()
{
	this->_hp = 100;
	this->_energy = 100;
	this->_attack_damage = 30;
	std::cout << "(FragTrap)Default Constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "(FragTrap)Copy Constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_attack_damage = 30;
	std::cout << "(FragTrap)Constructor for " << this->_name << " called." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "(FragTrap)Destructor for " << this->_name << " called." << std::endl;
}

// Overloaded Operators
FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "(FragTrap)Assignment operator called." << std::endl;
	if (this != &src)
		ClapTrap::operator=(src);
	return (*this);
}

// Public Methods

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": High Fives? Ok." << std::endl;
}





