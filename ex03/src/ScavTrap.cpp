/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:55:13 by jyap              #+#    #+#             */
/*   Updated: 2024/09/22 08:37:04 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_dmg = 20;
	this->_guarding_gate = false;
	std::cout << "ScavTrap Default Constructor for " << this->_name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
	this->_guarding_gate = copy._guarding_gate;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	// this->_name = name;
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_dmg = 20;
	this->_guarding_gate = false;
	std::cout << "ScavTrap Constructor for the name " << this->_name << " called" << std::endl;
}

// Destructors
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor for " << this->_name << " called" << std::endl;
}

// Overloaded Operators
ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	std::cout << "ScavTrap Assignment operator called" << std::endl;
	this->_name = src._name;
	this->_hit_pts = src._hit_pts;
	this->_energy_pts = src._energy_pts;
	this->_attack_dmg = src._attack_dmg;
	return *this;
}

// Public Methods
void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy_pts > 0 && this->_hit_pts > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
		this->_energy_pts--;
	}
	else if (this->_energy_pts == 0)
		std::cout << "ScavTrap " << this->_name << " is not able to attack " << target << ", because he has no energy points left." << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is not able to attack " << target << ", because he has not enough hit points." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_guarding_gate == false)
	{
		this->_guarding_gate = true;
		std::cout << "ScavTrap " << this->_name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already guarding the gate." << std::endl;
}

// Getter

// Setter

