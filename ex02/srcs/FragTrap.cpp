/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:16:43 by motoko            #+#    #+#             */
/*   Updated: 2024/02/19 15:37:47 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

static int i = 1;

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap Default Constructor called" << std::endl;
	std::stringstream	sstm;
	sstm << "FragTrap n° : " << i++ << " ";
	this->ClapTrap::_name = sstm.str(); 
	this->ClapTrap::_hp = 100; 
	this->ClapTrap::_ep = 100;
	this->ClapTrap::_attackDamage = 30;
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
	if (this != &src) {}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (this->_ep - DECREMENT_EP < 0)
	{
		std::cout << "Not enough energie point!" << std::endl;
		return ;
	}
	std::cout <<"FragTrap " << this->_name << " attack " << target << std::endl;
	this->_ep -= DECREMENT_EP;
}
void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap is now in high Fives Guys!" << std::endl;
}
