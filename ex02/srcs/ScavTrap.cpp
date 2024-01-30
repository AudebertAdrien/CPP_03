/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:16:43 by motoko            #+#    #+#             */
/*   Updated: 2024/01/30 16:16:33 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static int i = 1;

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	std::stringstream	sstm;
	sstm << "ScavTrap n° : " << i++ << " ";
	this->ClapTrap::_name = sstm.str(); 
	this->ClapTrap::_hp = 100; 
	this->ClapTrap::_ep = 50;
	this->ClapTrap::_attackDamage = 20;
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

void ScavTrap::attack(const std::string &target) {
	if (this->_ep - DECREMENT_EP < 0)
	{
		std::cout << "Not enough energie point!" << std::endl;
		return ;
	}
	std::cout <<"ScavTrap " << this->_name << " attack " << std::endl;
	this->_ep -= DECREMENT_EP;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}
