/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:55:00 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 14:14:15 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name")
{
	this->_name = "DefaultDT";
	std::cout << "(DiamondTrap)Default Constructor called." << std::endl;
	this->_hp = FragTrap::FRAG_HP;
	this->_energy = ScavTrap::SCAV_ENERGY;
	this->_attack_damage = FragTrap::FRAG_DMG;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy)
{
	std::cout << "(DiamondTrap)Copy Constructor called." << std::endl;
	*this = copy;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hp = FragTrap::FRAG_HP;
	this->_energy = ScavTrap::SCAV_ENERGY;
	this->_attack_damage = FragTrap::FRAG_DMG;
	std::cout << "(DiamondTrap)Constructor for " << this->_name << " called." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "(DiamondTrap)Destructor for " << this->_name << " called." << std::endl;
}

// Overloaded Operators
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		std::cout << "(DiamondTrap)Assignment operator called." << std::endl;
		this->_guarding_gate = src._guarding_gate;
		this->_name = src._name;
		this->_hp = src._hp;
		this->_energy = src._energy;
		this->_attack_damage = src._attack_damage;
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am a DiamondTrap named " << this->_name <<
	" and I originated from the ClapTrap named " << ClapTrap::_name << "." << std::endl;
	std::cout << "HP\t\t:" << _hp << std::endl;
	std::cout << "Energy\t\t:" << _energy << std::endl;
	std::cout << "Attack Damage\t:" << _attack_damage << std::endl;
	const ClapTrap* scavTrapClapPtr = ScavTrap::getClapTrapAddress();
    const ClapTrap* fragTrapClapPtr = FragTrap::getClapTrapAddress();
	if (scavTrapClapPtr == fragTrapClapPtr)
        std::cout << "Both ScavTrap and FragTrap share the same ClapTrap address!" << std::endl;
    else
        std::cout << "ScavTrap and FragTrap have different ClapTrap addresses!" << std::endl;
}
