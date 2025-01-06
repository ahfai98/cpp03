/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:54:15 by jyap              #+#    #+#             */
/*   Updated: 2025/01/06 17:54:28 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap(): ClapTrap("Default")
{
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_attack_dmg = 30;
	std::cout << "FragTrap Default Constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_attack_dmg = 30;
	std::cout << "FragTrap Constructor for " << this->_name << " called." << std::endl;
}

// Destructors
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor for " << this->_name << " called." << std::endl;
}

// Overloaded Operators
FragTrap &FragTrap::operator=(const FragTrap &src)
{
	if (this == &src)
		return (*this);
	std::cout << "FragTrap Assignment operator called." << std::endl;
	ClapTrap::operator=(src);
	return (*this);
}

// Public Methods

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": You want a high five? Ok.\n" << std::endl;
}
