/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:54:04 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 22:07:23 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
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

	// Public Methods
		void highFiveGuys(void);
};

#endif
