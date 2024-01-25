/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:57:20 by motoko            #+#    #+#             */
/*   Updated: 2024/01/25 18:30:52 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static int i;

ClapTrap::ClapTrap() {
	std::cout << "Default Constructor called" << std::endl;
	_name = "Player : " + i++;
	_hp = 10;
	_ep = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "Copy Constructor called" << std::endl;
		*this = src;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src.getName();
		this->_hp = src.getHp();
		this->_ep = src.getEp();
		this->_attackDamage = src.getAttackDamage();
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

std::string	ClapTrap::getName() const {
	std::cout << "getName called" << std::endl;
	return (this->_name);
}

int			ClapTrap::getHp() const {
	std::cout << "getHp called" << std::endl;
	return (this->_hp);
}

int			ClapTrap::getEp() const {
	std::cout << "getEp called" << std::endl;
	return (this->_ep);
}

int			ClapTrap::getAttackDamage() const {
	std::cout << "getAttackDamage called" << std::endl;
	return (this->_attackDamage);
}

void attack(const std::string &target) {
	std::cout << "attack called" << std::endl;
	target.takeDamage(this->_attackDamage);
}

void takeDamage(unsigned int amount) {
	std::cout << "takeDamage called" << std::endl;
}

void beRepaired(unsigned int amount) {
	std::cout << "beRepaired called" << std::endl;
}
