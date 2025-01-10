/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:54:15 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 13:29:23 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap(): ClapTrap("Default")
{
	this->_hp = 100;
	this->_energy = 100;
	this->_attack_damage = 30;
	std::cout << "(FragTrap)Default Constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	*this = copy;
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
	if (this != &src)
	{
		std::cout << "(FragTrap)Assignment operator called." << std::endl;
		this->_name = src._name;
		this->_hp = src._hp;
		this->_energy = src._energy;
		this->_attack_damage = src._attack_damage;
	}
	return (*this);
}

// Public Methods

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": You want a high five? Ok.\n" << std::endl;
}

const ClapTrap* FragTrap::getClapTrapAddress() const
{
	return static_cast<const ClapTrap*>(this);
}
