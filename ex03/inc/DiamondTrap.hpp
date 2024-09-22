/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:54:39 by jyap              #+#    #+#             */
/*   Updated: 2024/09/22 08:22:33 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Header-protection
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

// Includes
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// classes

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
	// Constructors
		DiamondTrap();
		DiamondTrap(const DiamondTrap& copy);
		DiamondTrap(std::string name);

	// Destructors
		virtual ~DiamondTrap();

	// Overloaded Operators
		DiamondTrap& operator=(const DiamondTrap& src);

	// Public Methods
		void attack(const std::string& target);
		void whoAmI(void);
	// Getter

	// Setter

};

#endif