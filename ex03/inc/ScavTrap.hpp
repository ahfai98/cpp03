/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:54:48 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 14:06:34 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	protected:
		bool _guarding_gate;
		static const unsigned int SCAV_HP = 100;
		static const unsigned int SCAV_ENERGY = 50;
		static const unsigned int SCAV_DMG = 20;
	public:
	// Constructors
		ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap(std::string name);
		~ScavTrap();

	// Overloaded Operators
		ScavTrap &operator=(const ScavTrap &src);

	// Public Methods
		virtual void attack(const std::string &target);
		void guardGate(void);
		const ClapTrap* getClapTrapAddress() const;
};

#endif
