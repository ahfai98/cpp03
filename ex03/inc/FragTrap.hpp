/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:54:43 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 22:43:41 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
	// Constructors
		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);

	// Destructors
		~FragTrap();

	// Overloaded Operators
		FragTrap &operator=(const FragTrap &src);

	static unsigned int _attack_dmg;
	static unsigned int _hit_pts;
	// Public Methods
		void highFiveGuys(void);
	
};

#endif
