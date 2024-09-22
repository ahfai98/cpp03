/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:53:31 by jyap              #+#    #+#             */
/*   Updated: 2024/09/22 08:22:33 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

// Includes
#include <string>
#include <iostream>

// classes

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
		ClapTrap(const ClapTrap& copy);
		ClapTrap(std::string name);

	// Destructors
		virtual ~ClapTrap();

	// Overloaded Operators
		ClapTrap& operator=(const ClapTrap& src);

	// Public Methods
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	// Getter

	// Setter

};

#endif