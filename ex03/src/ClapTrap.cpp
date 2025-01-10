/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:53:39 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 12:49:18 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap(): _name("Default"), _hp(10), _energy(10), _attack_damage(0)
{
	std::cout << "(ClapTrap)Default Constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "(ClapTrap)Copy Constructor called." << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _energy(10), _attack_damage(0)
{
	std::cout << "(ClapTrap)Constructor for " << this->_name << " called." << std::endl;
}


ClapTrap::~ClapTrap()
{
	std::cout << "(ClapTrap)Destructor for " << this->_name << " called." << std::endl;
}

// Overloaded Operators
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src)
	{
		std::cout << "(ClapTrap) Assignment operator called." << std::endl;
		this->_name = src._name;
		this->_hp = src._hp;
		this->_energy = src._energy;
		this->_attack_damage = src._attack_damage;
	}
	return (*this);
}

// Public Methods
void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " damage!" << std::endl;
		this->_energy--;
		std::cout << "<Energy Left :" << this->_energy << ">" << std::endl;
	}
	else if (this->_hp == 0)
		std::cout << "ClapTrap " << this->_name << " cannot attack " << target << " due to its 0 hp." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " cannot attack " << target << " due to its 0 energy." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > amount)
		this->_hp -= amount;
	else if (this->_hp > 0)
	{
		amount = this->_hp;
		this->_hp = 0;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is already dead, stop beating it." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " lost " << amount << " hp, it now has " << this->_hp << " hp." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hp > 0)
	{
		if (amount > 10 - this->_hp)
			amount = 10 - this->_hp;
		this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " repaired itself and gained " << amount << " hp, it now has " << this->_hp << " hp." << std::endl;
		this->_energy--;
		std::cout << "<Energy Left :" << this->_energy << ">" << std::endl;
	}
	else if (this->_hp == 0)
		std::cout << "ClapTrap " << this->_name << " is not able to repair itself due to its 0 hp." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " is not able to repair itself due to its 0 energy." << std::endl;
}

void	ClapTrap::setName(const std::string& name)
{
	this->_name = name;
}
