/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:52:42 by jyap              #+#    #+#             */
/*   Updated: 2024/09/22 08:57:44 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap(): _name("Default"), _hit_pts(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_pts(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "ClapTrap Constructor for the name " << _name << " called" << std::endl;
}

// Destructors
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor for " << _name << " called" << std::endl;
}

// Overloaded Operators
ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << "ClapTrap Assignment operator called" << std::endl;
	this->_name = src._name + "(Copy)";
	this->_hit_pts = src._hit_pts;
	this->_energy_pts = src._energy_pts;
	this->_attack_dmg = src._attack_dmg;
	return *this;
}

// Public Methods
void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy_pts > 0 && this->_hit_pts > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
		this->_energy_pts--;
	}
	else if (this->_hit_pts == 0)
		std::cout << "ClapTrap " << this->_name << " is not able to attack " << target << " due to insufficient hit points." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " is not able to attack " << target << ", due to insufficient energy points." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_pts > amount)
		this->_hit_pts -= amount;
	else if (this->_hit_pts > 0)
		this->_hit_pts = 0;
	else
	{
		std::cout << "ClapTrap " << this->_name << " is already dead, stop beating it." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " was attacked and lost " << amount << " hit points, it now has " << this->_hit_pts << " hit points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_pts > 0 && this->_hit_pts > 0)
	{
		this->_hit_pts += amount;
		if (this->_hit_pts > 10)
			this->_hit_pts = 10;
		std::cout << "ClapTrap " << this->_name << " repaired itself and gained " << amount << " hit points, he now has " << this->_hit_pts << " hit points." << std::endl;
		this->_energy_pts--;
	}
	else if (this->_hit_pts == 0)
		std::cout << "ClapTrap " << this->_name << " is not able to repair itself due to insufficient hit points." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " is not able to repair due to insufficient energy points." << std::endl;
}
// Getter

// Setter

