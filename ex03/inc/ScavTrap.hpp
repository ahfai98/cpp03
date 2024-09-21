/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:54:48 by jyap              #+#    #+#             */
/*   Updated: 2024/09/22 07:54:49 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

// Includes
#include "ClapTrap.hpp"

// classes

class ScavTrap: virtual public ClapTrap
{
	private:
		bool _guarding_gate;
	public:
	// Constructors
		ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap(std::string name);

	// Deconstructors
		~ScavTrap();

	// Overloaded Operators
		ScavTrap &operator=(const ScavTrap &src);

	// Public Methods
		void attack(const std::string &target);
		void guardGate(void);
	// Getter

	// Setter

};

#endif