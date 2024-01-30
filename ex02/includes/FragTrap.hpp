/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:17:34 by motoko            #+#    #+#             */
/*   Updated: 2024/01/29 18:26:12 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

#include <iostream>
#include <sstream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name, int hp, int ep, int attackDamage);
		FragTrap(const FragTrap &src);
		FragTrap& operator=(const FragTrap &src);
		~FragTrap();

		void	attack(const std::string &target);
		void	highFivesGuys(void);
	private:
};

#endif
