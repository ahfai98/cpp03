/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:54:34 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 22:02:59 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hit_pts;
		unsigned int _energy_pts;
		unsigned int _attack_dmg;

	public:
	// Constructors
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap(std::string name);

	// Destructors
		virtual ~ClapTrap();

	// Overloaded Operators
		ClapTrap &operator=(const ClapTrap &src);

	// Public Methods
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	

	

};

#endif