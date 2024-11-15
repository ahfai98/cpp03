/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:54:48 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 23:06:48 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	protected:
		bool _guarding_gate;
	public:
	// Constructors
		ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap(std::string name);

	// Destructors
		~ScavTrap();

	// Overloaded Operators
		ScavTrap &operator=(const ScavTrap &src);

		static unsigned int _energy_pts;

	// Public Methods
		void attack(const std::string &target);
		void guardGate(void);
};

#endif
