/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:58:39 by motoko            #+#    #+#             */
/*   Updated: 2024/01/30 16:18:14 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <sstream>

#define DECREMENT_EP 1

class	ClapTrap
{
	protected:
		std::string	_name;
		int			_hp;
		int			_ep;
		int			_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name, int hp, int ep, int attackDamage);
		ClapTrap(const ClapTrap &src);
		ClapTrap& operator=(const ClapTrap &src);
		~ClapTrap();
		
		std::string	getName() const;
		int			getHp() const;
		int			getEp() const;
		int			getAttackDamage() const;

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
