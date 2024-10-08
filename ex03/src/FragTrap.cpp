/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:55:05 by jyap              #+#    #+#             */
/*   Updated: 2024/09/22 08:22:33 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap(): ClapTrap()
{
	if (this->_hit_pts == 10)
		this->_hit_pts = 100;
	this->_energy_pts = 100;
	// if (this->_attack_dmg == 0)
		this->_attack_dmg = 30;
	std::cout << "FragTrap Default Constructor for " << this->_name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	// this->_name = name;
	if (this->_hit_pts == 10)
		this->_hit_pts = 100;
	this->_energy_pts = 100;
	if (this->_attack_dmg == 0)
		this->_attack_dmg = 30;
	std::cout << "FragTrap Constructor for the name " << this->_name << " called" << std::endl;
}

// Destructors
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor for " << this->_name << " called" << std::endl;
}

// Overloaded Operators
FragTrap& FragTrap::operator=(const FragTrap& src)
{
	std::cout << "FragTrap Assignment operator called" << std::endl;
	this->_name = src._name;
	this->_hit_pts = src._hit_pts;
	this->_energy_pts = src._energy_pts;
	this->_attack_dmg = src._attack_dmg;
	return *this;
}

// Public Methods

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": You want a high five?\n\t*WHAMM*\nHere you go." << std::endl;
}

// Getter

// Setter

