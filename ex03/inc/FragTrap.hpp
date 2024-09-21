/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:54:43 by jyap              #+#    #+#             */
/*   Updated: 2024/09/22 07:54:44 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

// Includes
#include "ClapTrap.hpp"

// classes

class FragTrap: virtual public ClapTrap
{
	private:

	public:
	// Constructors
		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);

	// Deconstructors
		~FragTrap();

	// Overloaded Operators
		FragTrap &operator=(const FragTrap &src);

	// Public Methods
		void highFiveGuys(void);
	// Getter

	// Setter

};

#endif