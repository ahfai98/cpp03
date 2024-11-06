/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:55:00 by jyap              #+#    #+#             */
/*   Updated: 2024/09/22 08:22:33 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include "DiamondTrap.hpp"
#include "../inc/DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap(): ClapTrap("defaultDT_clap_name")
{
	this->_name = "defaultDT";
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_dmg = FragTrap::_attack_dmg;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_dmg = FragTrap::_attack_dmg;
	std::cout << "DiamondTrap Constructor for the name " << this->_name << " called" << std::endl;
}

// Destructors
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor for " << this->_name << " called" << std::endl;
}

// Overloaded Operators
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	if (this == &src)
		return (*this);
	std::cout << "DiamondTrap Assignment operator called" << std::endl;
	this->_name = src._name;
	this->_hit_pts = src._hit_pts;
	this->_energy_pts = src._energy_pts;
	this->_attack_dmg = src._attack_dmg;
	return (*this);
}

// Public Methods
void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hello I am a DiamondTrap named " << this->_name <<
	" and I originated from the ClapTrap named " << ClapTrap::_name << "." <<
	std::endl;
}

// Getter

// Setter
