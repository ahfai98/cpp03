/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:55:00 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 23:10:48 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap(): ClapTrap("DefaultDT_clap_name"), _name("DefaultDT")
{
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_dmg = FragTrap::_attack_dmg;
	std::cout << "DiamondTrap Default Constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
	this->_hit_pts = copy._hit_pts;
	this->_energy_pts = copy._energy_pts;
	this->_attack_dmg = copy._attack_dmg;
	std::cout << "DiamondTrap Copy Constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), _name(name)
{
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_dmg = FragTrap::_attack_dmg;
	std::cout << "DiamondTrap Constructor for " << this->_name << " called." << std::endl;
}

// Destructors
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor for " << this->_name << " called." << std::endl;
}

// Overloaded Operators
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this == &src)
		return (*this);
	std::cout << "DiamondTrap Assignment operator called." << std::endl;
	ClapTrap::operator=(src);
	this->_name = src._name;
	this->_hit_pts = src._hit_pts;
	this->_energy_pts = src._energy_pts;
	this->_attack_dmg = src._attack_dmg;
	return (*this);
}

// Public Methods
void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hello I am a DiamondTrap named " << this->_name <<
	" and I originated from the ClapTrap named " << ClapTrap::_name << "." << std::endl;
	std::cout << "HP\t\t:" << this->_hit_pts << std::endl;
	std::cout << "Energy\t\t:" << this->_energy_pts << std::endl;
	std::cout << "Attack Damage\t:" << this->_attack_dmg << std::endl;
	if (this->_guarding_gate)
		std::cout << "Gate Keeper Mode : On" << std::endl;
	else
		std::cout << "Gate Keeper Mode : Off" << std::endl;
}
