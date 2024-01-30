/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:16:43 by motoko            #+#    #+#             */
/*   Updated: 2024/01/29 17:42:12 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static int i = 1;

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	std::stringstream	sstm;
	sstm << "ScavTrap n° : " << i++ << " ";
}

ScavTrap::ScavTrap(std::string name, int hp, int ep, int attackDamage)  : ClapTrap(name, hp, ep, attackDamage) {
	std::cout << "ScavTrap Parameterized Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap() {
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
		*this = src;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}
