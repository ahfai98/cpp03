/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:53:47 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 12:32:22 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap(): ClapTrap("Default"), _guarding_gate(false)
{
	this->_hp = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap Default Constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy), _guarding_gate(copy._guarding_gate)
{
	std::cout << "ScavTrap Copy Constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _guarding_gate(false)
{
	this->_hp = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap Constructor for " << this->_name << " called." << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor for " << this->_name << " called." << std::endl;
}

// Overloaded Operators
ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	if (this == &src)
		return (*this);
	std::cout << "ScavTrap Assignment operator called." << std::endl;
	ClapTrap::operator=(src);
	this->_guarding_gate = src._guarding_gate;
	return (*this);
}

// Public Methods
void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " damage!" << std::endl;
		this->_energy--;
		std::cout << "<Energy Left :" << this->_energy << ">" << std::endl;
	}
	else if (this->_energy == 0)
		std::cout << "ScavTrap " << this->_name << " cannot attack " << target << " due to its 0 energy." << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " cannot attack " << target << " due to its 0 hp." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_guarding_gate == false)
	{
		this->_guarding_gate = true;
		std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode." << std::endl;
	}
	else
	{
		this->_guarding_gate = false;
		std::cout << "ScavTrap " << this->_name << " exited Gate Keeper mode." << std::endl;
	}
}
