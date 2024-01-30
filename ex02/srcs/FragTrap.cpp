/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:16:43 by motoko            #+#    #+#             */
/*   Updated: 2024/01/29 18:24:24 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

static int i = 1;

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap Default Constructor called" << std::endl;
	std::stringstream	sstm;
	sstm << "FragTrap n° : " << i++ << " ";
}

FragTrap::FragTrap(std::string name, int hp, int ep, int attackDamage)  : ClapTrap(name, hp, ep, attackDamage) {
	std::cout << "FragTrap Parameterized Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap() {
	std::cout << "FragTrap Copy Constructor called" << std::endl;
		*this = src;
}

FragTrap&	FragTrap::operator=(const FragTrap &src) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap is now in high Fives Guys!" << std::endl;
}