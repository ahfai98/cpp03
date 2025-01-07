/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:53:47 by jyap              #+#    #+#             */
/*   Updated: 2025/01/07 16:02:32 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap(): ClapTrap("Default"), _guarding_gate(false)
{
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_dmg = 20;
	std::cout << "ScavTrap Default Constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap Copy Constructor called." << std::endl;
	*this = copy;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _guarding_gate(false)
{
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_dmg = 20;
	std::cout << "ScavTrap Constructor for " << this->_name << " called." << std::endl;
}

// Destructors
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor for " << this->_name << " called." << std::endl;
}

// Overloaded Operators
ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		std::cout << "ScavTrap Assignment operator called." << std::endl;
		this->_name = src._name;
		this->_attack_dmg = src._attack_dmg;
		this->_hit_pts = src._hit_pts;
		this->_energy_pts = src._energy_pts;
		this->_guarding_gate = src._guarding_gate;
	}
	return (*this);
}

// Public Methods
void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy_pts > 0 && this->_hit_pts > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
		this->_energy_pts--;
		std::cout << "<Energy Left :" << this->_energy_pts << ">" << std::endl;
	}
	else if (this->_energy_pts == 0)
		std::cout << "ScavTrap " << this->_name << " is not able to attack " << target << " due to insufficient energy points." << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is not able to attack " << target << " due to insufficient hit points." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_guarding_gate == false)
	{
		this->_guarding_gate = true;
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
	}
	else
	{
		this->_guarding_gate = false;
		std::cout << "ScavTrap " << this->_name << " has deactivated Gate keeper mode." << std::endl;
	}
}
